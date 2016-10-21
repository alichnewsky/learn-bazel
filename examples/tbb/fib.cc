#include "tbb/task.h"

using tbb::task;

long serial_fib(long n) {
  if (n <= 1) {
    return 1;
  }
  else {
    return serial_fib(n - 2) + serial_fib(n - 1);
  }
}

class FibTask : public task {

public:

  const long cutoff = 16;
  const long n;
  long *const sum;

  FibTask(long n_, long *sum_) :
    n(n_), sum(sum_)
  {}

  task*execute() {
    if (n < cutoff) {
      *sum = serial_fib(n);
    }
    else {
      long x, y;
      FibTask &a = *new (allocate_child())FibTask(n - 1, &x);
      FibTask &b = *new (allocate_child())FibTask(n - 2, &y);
      // Set ref_count to 'two children plus one for the wait".
      set_ref_count(3);
      // Start b running.
      spawn(b);
      // Start a running and wait for all children (a and b).
      spawn_and_wait_for_all(a);
      // Do the sum
      *sum = x + y;
    }
    return NULL;
  }
};

long parallel_fib(long n) {
  long sum;
  FibTask &a = *new (task::allocate_root())FibTask(n, &sum);
  task::spawn_root_and_wait(a);
  return sum;
}

