#include "gtest/gtest.h"

long serial_fib(long n);

long parallel_fib(long n);

TEST(SerialFibonacci, Positive) {
  EXPECT_EQ(serial_fib(0), 1);
  EXPECT_EQ(serial_fib(1), 1);
  EXPECT_EQ(serial_fib(2), 2);
  EXPECT_EQ(serial_fib(3), 3);
  EXPECT_EQ(serial_fib(4), 5);
  EXPECT_EQ(serial_fib(5), 8);
}

TEST(ParallelFibonacci, Positive) {
  EXPECT_EQ(parallel_fib(17), serial_fib(17));
}
