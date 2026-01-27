# C Lab Part 1

This lab introduces fundamental C programming concepts through hands-on exercises.

## Overview

The lab consists of three source files, each focusing on different concepts:

| File | Concepts Covered |
|------|------------------|
| `ptr.c` | Pointers, dereferencing, pass-by-reference |
| `bitfloat.c` | Bitwise operations, bit manipulation, IEEE 754 floating point |
| `array.c` | Arrays, pointer arithmetic, memory layout, endianness |

## Building and Testing

```bash
make          # Compile all files
./clab_test   # Run all tests
./clab_test -t 1  # Run only bitfloat tests
./clab_test -t 2  # Run only ptr tests
./clab_test -t 3  # Run only array tests
```

## Files to Modify

You need to implement the TODO sections in:

- **ptr.c**: `set_to_five`, `initialize_ptr`, `swap_int`
- **bitfloat.c**: `get_bit_at_pos`, `set_bit_at_pos`, `get_most_significant_byte`, `sum_overflowed`, `get_exponent_field`
- **array.c**: `array_sum`, `array_cpy`, `bubble_sort`, `big_to_little_endian`

## Prerequisites

Before starting, you should be familiar with:

- Basic C syntax and data types
- How pointers work in C
- Bitwise operators: `&`, `|`, `^`, `~`, `<<`, `>>`
- How arrays are represented in memory

## Useful References

- [Bitwise Operations in C](https://en.wikipedia.org/wiki/Bitwise_operations_in_C)
- [IEEE 754 Floating Point](https://en.wikipedia.org/wiki/IEEE_754)
- [Endianness](https://en.wikipedia.org/wiki/Endianness)
- [Bubble Sort Algorithm](https://en.wikipedia.org/wiki/Bubble_sort)
