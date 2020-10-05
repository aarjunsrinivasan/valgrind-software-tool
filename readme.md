# C++ Boilerplate
[![Build Status](https://travis-ci.org/aarjunsrinivasan/valgring-software-tool.svg?branch=main)](https://travis-ci.org/aarjunsrinivasan/valgring-software-tool)
[![Coverage Status](https://coveralls.io/repos/github/aarjunsrinivasan/valgring-software-tool/badge.svg?branch=main)](https://coveralls.io/github/aarjunsrinivasan/valgring-software-tool?branch=main)
---

## Overview

Exercise to identify and fix errors in C++ Boilerplate Valgrind_excercise branch.
The valgrind command is used to identify memory leaks, uninitialized variables in the program and for function and memory profiling.

Kcachegrind is used to visualize the callgrind.out file. 
ms_print is used to produce a visualization of massif.out in the terminal.

Find initial_errors.txt solved-errors.txt to compare and see the error outputs
Find kcachegrind30022.png for profiler output
Check results folder for cppcheck cpplint and massif.out outputs

The cpp-boilerplate is a simple starter C++ project with:

- cmake
- googletest

## Standard install via command-line
```
git clone --recursive https://github.com/senthilarul/Valgrind-cppboilerplate.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```
## Run Valgrind test
To install valgrind
```
sudo apt install valgrind
```
To install Kcachegrind
```
sudo apt install kcachegrind
```

For identifying errors, memory leaks using valgrind
```
cd <path to repository>
valgrind --tool=memcheck --leak-check=full ./build/app/shell-app 

```
Function and Memory Profiling
```
valgrind --tool=callgrind ./build/app/shell-app
valgrind --tool=massif ./build/app/shell-app
```

The above two commands produce a callgrind.out and massif.out files respectively.

To visualize callgrind.out file we use Kcachegrind.
```
kcachegrind
```
In the application that opens up, click on open menu. Select the callgrind.out file from your repository.

To visualize massif.out file in the terminal.
```
ms_print massif.out.<process id>
```
## Run cppcheck

To detect bugs and perform static code analysis, cppcheck is used. It can be installed with the following command:
```
sudo apt-get install cppcheck
```
To run cppcheck, run the following command in the `/PID-Controller-TDD` folder:
```
cppcheck --enable=all --std=c++11 -I include/ --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" )
```

## Run cpplint

To check if the Google style guide is followed cpplint is used:
```
sudo apt-get install cpplint
```

To run the cpplint, follow the following commands in the `/PID-Controller-TDD` directory:
```
cpplint $( find . -name \*.hpp -or -name \*.cpp | grep -vE -e "^./build/" -e "^./vendor/" -e "^./data" )



