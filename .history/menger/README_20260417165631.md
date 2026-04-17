# 0. 2D Menger sponge

This project implements a function that draws a 2D Menger sponge.

## Files

- 0-menger.c: implementation of menger(int level)
- menger.h: header file with function prototype

## Prototype

```c
void menger(int level);
```

## Requirements

- Allowed editors: vi, vim, emacs
- Compiled on Ubuntu 14.04 LTS
- Compilation: `gcc 4.8.4 -Wall -Werror -Wextra -pedantic`
- All files end with a new line
- Betty style (`betty-style.pl`, `betty-doc.pl`)
- No global variables
- Header files are include guarded

## Description

A level `N` Menger sponge is a square of size `3^N`.
A level `0` sponge is represented by `#`.
For each higher level, the middle third of each 3x3 block is left empty.

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -o 0-menger 0-menger.c 0-main.c -lm
```

## Example

```bash
./0-menger 2
#########
# ## ## #
#########
###   ###
# #   # #
###   ###
#########
# ## ## #
#########
```
