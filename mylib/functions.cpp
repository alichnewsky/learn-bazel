#include <stdio.h>
// how do I pass -I topdir to bazel?
// do I even want to?
#include "functions.hpp"

void mylibrary::foobar(int nmax){
  for(int i = 0; i < nmax; i++){
    if      ( i % 15 == 0 ) printf("foobar\n");
    else if ( i %  5 == 0 ) printf("bar\n");
    else if ( i %  3 == 0 ) printf("foo\n");
    else                    printf("%d\n", i);
  }
}
