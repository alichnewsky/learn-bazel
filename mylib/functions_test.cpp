#include <gtest/gtest.h>
#include "functions.hpp"

namespace {
  class MyLibraryFunctionsTest : public testing::Test {
  protected:
    virtual void SetUp() override {}
    virtual void TearDown() override {}
  };
  // always passes
  TEST_F(MyLibraryFunctionsTest, foobar) {
    mylibrary::foobar(15);
    int a = 1;
    EXPECT_EQ(1, a);
  }  
}
