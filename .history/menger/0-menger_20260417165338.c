#include <stdio.h>

#include "menger.h"

/**
 * is_hole - Check whether a coordinate belongs to a hole
 * @row: Row index
 * @col: Column index
 *
 * Return: 1 if the coordinate is a hole, otherwise 0
 */
static int is_hole(int row, int col)
{
	while (row > 0 || col > 0)
	{
		if (row % 3 == 1 && col % 3 == 1)
			return (1);
		row /= 3;
		col /= 3;
	}

	return (0);
}

/**
 * menger - Draw a 2D Menger sponge of a given level
 * @level: Level of the sponge
 */
void menger(int level)
{
	int row, col;
	int size;

	if (level < 0)
		return;

	size = 1;
	while (level > 0)
	{
		size *= 3;
		level--;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			putchar(is_hole(row, col) ? ' ' : '#');
		putchar('\n');
	}
}
