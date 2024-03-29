Derived from: https://cmake.org/examples/

## layout

- src - source code, `hello.h` is the public header and will be installed with `make
install`
- test - example code that exercises APIs in the public header
- CMakeLists.txt - cmake files that specify how to build the library and test

## setup

```
git clone git@github.com:cwsmith/cmakeHelloWorld.git
mkdir buildCmakeHelloWorld
```

## build

The following assumes that a valid C and C++ compiler, and `cmake`, are in your PATH.

`CMAKE_INSTALL_PREFIX` is the path where the library, headers, and test binary
are installed.

```
cd buildCmakeHelloWorld
cmake ../cmakeHelloWorld -DCMAKE_INSTALL_PREFIX=$PWD/install
make 
make install
```

## test

```
./install/bin/helloDemo
```

