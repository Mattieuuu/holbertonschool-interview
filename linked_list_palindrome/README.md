# Linked List Palindrome

## Description
This project contains a function in C that checks if a singly linked list is a palindrome.

## Function Prototype
```c
int is_palindrome(listint_t **head);
```

## Return Value
- 1 if the list is a palindrome
- 0 if it is not a palindrome
- An empty list is considered a palindrome

## Algorithm
1. Use slow and fast pointers to find the middle of the list
2. Reverse the second half of the list
3. Compare the first half with the reversed second half
4. Restore the list by reversing the second half back
5. Return the result

## Files
- `lists.h` - Header file with struct definition and function prototypes
- `0-is_palindrome.c` - Implementation of the is_palindrome function
- `linked_lists.c` - Helper functions for testing
