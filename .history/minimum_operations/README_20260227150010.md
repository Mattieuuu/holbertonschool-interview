# Minimum Operations

## Description
This project contains a function that calculates the fewest number of operations needed to result in exactly n H characters in a file, using only "Copy All" and "Paste" operations.

## Function Prototype
```python
def minOperations(n)
```

## Algorithm
The solution uses prime factorization. The minimum number of operations equals the sum of all prime factors of n.

## Example
- n = 9 (3 × 3): operations = 3 + 3 = 6
- n = 4 (2 × 2): operations = 2 + 2 = 4
- n = 12 (2 × 2 × 3): operations = 2 + 2 + 3 = 7

## Files
- `0-minoperations.py` - Implementation of the minOperations function
