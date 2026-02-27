# Sandpiles

## Description
This project implements a function that computes the sum of two sandpiles and performs toppling until the result is stable.

A sandpile is considered stable when none of its cells contains more than 3 grains.

## Function Prototype
```c
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
```

## Algorithm
1. Add grid2 to grid1 element-wise
2. While grid1 is unstable (any cell > 3):
   - Print the current state
   - Perform toppling (cells with >3 grains distribute to neighbors)
3. Result is stored in grid1

## Files
- `sandpiles.h` - Header file with function prototype
- `0-sandpiles.c` - Implementation of sandpiles_sum function
