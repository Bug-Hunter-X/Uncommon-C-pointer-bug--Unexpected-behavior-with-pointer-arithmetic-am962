# Uncommon C Pointer Bug

This repository demonstrates an uncommon, yet subtle, bug related to pointer arithmetic in C. The code appears simple but highlights a potential pitfall for developers unfamiliar with the intricacies of memory management and pointers.

## The Bug

The primary issue lies in the understanding and misuse of pointer arithmetic, potentially leading to unexpected behavior or crashes.

## How to Reproduce

1. Clone this repository.
2. Compile `bug.c` using a C compiler (like GCC): `gcc bug.c -o bug`
3. Run the executable: `./bug`

Observe the output. Does it match your expectations?

## Solution

The solution demonstrates correct usage of pointers to modify variables. The code is well-commented to illustrate the improved understanding and implementation.

## Learning Outcomes

By studying this bug and its solution, you will gain a deeper understanding of:

* Pointer arithmetic in C
* Memory management in C
* Common pitfalls to avoid when working with pointers