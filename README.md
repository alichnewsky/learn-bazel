## Learn to use [Bazel](http://bazel.io)
My goal here is to learn to use Bazel as a C++ build tool for Linux

It is meant as the basis for a tutorial and a comparison with other tools

1. install Bazel
1. clone this repo
```
git clone http://github.com/alichnewsky/learn-bazel.git
cd learn-bazel
git submodule update --init
```
1. build
```bash 
bazel build -c opt --verbose_failures //mylib:all
bazel build -c opt //examples/tbb:all
```
1. test
```
bazel test -c opt //mylib:all
bazel test -c opt //examples/tbb:all
```

I have not yet figured out:
* how I packaged software built with Bazel
* how I make sure I distribute and link with the right libraries: `libmylib.so` not `libmylib_Slibmylib.so` 
* Can I strip the symbols from objects not part of a library's API (declare what symbols I want to export or strip)
* how to use `third_party` and `//external` correctly
  * I have examples in another repo, but not this one
* how to use other bazel repos as third party and let their own?
* how to use gtest as part of `cc_test` targets (I think it's trivial)
* how do I use both gcc and clang to build
* how do I add additional rules for language meant to link with C/C++
  * fortran
  * ispc
