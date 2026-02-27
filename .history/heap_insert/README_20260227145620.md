# Heap Insert

## Description
This project contains functions for creating and manipulating binary tree nodes, specifically for implementing a Max Binary Heap.

## Data Structures

### Basic Binary Tree
```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
```

### Max Binary Heap
```c
typedef struct binary_tree_s heap_t;
```

## Files
- `binary_trees.h` - Header file containing struct definitions and function prototypes
- `0-binary_tree_node.c` - Function that creates a binary tree node

## Compilation
All files are compiled with:
```bash
gcc -Wall -Werror -Wextra -pedantic
```
