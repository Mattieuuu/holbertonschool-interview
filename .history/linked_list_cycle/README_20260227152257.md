# Linked List Cycle

## Description
This project contains a function in C that checks if a singly linked list has a cycle in it using Floyd's Cycle Detection Algorithm.

## Function Prototype
```c
int check_cycle(listint_t *list);
```

## Return Value
- 0 if there is no cycle
- 1 if there is a cycle

## Algorithm
Uses Floyd's Cycle Detection Algorithm (tortoise and hare):
- Slow pointer moves one step at a time
- Fast pointer moves two steps at a time
- If they meet, there's a cycle
- If fast pointer reaches NULL, there's no cycle

## Complexity
- Time: O(n)
- Space: O(1) - no extra memory allocation

## Files
- `lists.h` - Header file with struct definition and function prototypes
- `0-check_cycle.c` - Implementation of the check_cycle function
- `0-linked_lists.c` - Helper functions for testing
