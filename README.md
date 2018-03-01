# gtest
my google test project structure

## Step 1: download and install googletest

```shell
cd ~/Github
git clone https://github.com/google/googletest.git
cd googletest
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=/usr/local/gtest
make
make install
```

## Step 2: Makefile
specify gtest include/lib path.

## Step 3: TestXXX.cpp
test source file demo.

## Step 4: test-all.cpp
call RUN_ALL_TESTS() to run all tests.

## usage
write test code based on TestXXX.cpp.
```shell
make
./test-all.bin
```
