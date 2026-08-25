# CPP_02

![42](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white) ![Language](https://img.shields.io/badge/lang-C++98-blue?style=flat-square) ![Status](https://img.shields.io/badge/status-completed-success?style=flat-square)

42 School C++ module 02: operator overloading and fixed-point arithmetic.

## About This Project

### What It Does

This module implements a fixed-point number class ("Fixed") from scratch, backed by a plain int that stores a fractional value using a configurable number of bits.

Exercises in this module:
- ex00: the base "Fixed" class with constructors, a copy assignment operator, and conversions to/from int/loat.
- ex01: adds constructors from int/loat and rounding-aware 	oInt/	oFloat conversions, plus a small test program.
- ex02: overloads the full set of comparison, arithmetic, increment/decrement, and stream-insertion operators so Fixed behaves like a native numeric type.

### Purpose

It evaluates operator overloading and the "orthodox canonical form" (constructor, copy constructor, copy assignment, destructor) by forcing the student to reimplement arithmetic semantics that C++ gives built-in types for free.

## Stack

- School: 42
- Primary language: C++98
- Scope: one repository per project

## Structure

| Exercise | Path | Binary |
|---|---|---|
| ex00 | ./ex00 | Fixed |
| ex01 | ./ex01 | Fixed |
| ex02 | ./ex02 | Fixed |

## How to Run

Prerequisites: `make` and a C++98-capable compiler (`g++` or `clang++`).

Compile and run each exercise separately:

### ex00

~~~bash
cd ex00
make
./Fixed
~~~

### ex01

~~~bash
cd ex01
make
./Fixed
~~~

### ex02

~~~bash
cd ex02
make
./Fixed
~~~

## Testing

No dedicated testing scripts were detected at the project root.

## Notes

- This repository is part of the 42 portfolio.
- Commands are intended for local execution for review and evaluation.

## Author

anapaulapgavilan
