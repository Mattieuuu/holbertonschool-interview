# 0. AVL - From sorted array

This project implements a function that builds an AVL tree from a sorted array.

## Files

- 0-sorted_array_to_avl.c: implementation of sorted_array_to_avl
- binary_trees.h: data structures and function prototype

## Prototype

```c
avl_t *sorted_array_to_avl(int *array, size_t size);
```

## Requirements

- Ubuntu 14.04 LTS
- gcc 4.8.4 with -Wall -Werror -Wextra -pedantic
- Betty style and documentation
- No global variables
- No more than 5 functions per file
- Header files are include guarded

## Description

The function uses divide and conquer:
- pick the middle element as root
- recursively build left subtree from left half
- recursively build right subtree from right half

No rotations are used.
