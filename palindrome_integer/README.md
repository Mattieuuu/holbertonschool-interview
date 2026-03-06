# Palindrome Integer

This project contains a function that checks whether or not a given unsigned integer is a palindrome.

## Function Prototype

```c
int is_palindrome(unsigned long n);
```

## Description

The function checks if an unsigned long integer reads the same forwards and backwards.

- Returns `1` if the number is a palindrome
- Returns `0` otherwise
- No dynamic memory allocation is used

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -g3 -o palindrome 0-main.c 0-is_palindrome.c
```

## Usage

```bash
./palindrome <number>
```

## Examples

```
./palindrome 1
1 is a palindrome.

./palindrome 121
121 is a palindrome.

./palindrome 112
112 is not a palindrome.

./palindrome 12345678987654321
12345678987654321 is a palindrome.
```
