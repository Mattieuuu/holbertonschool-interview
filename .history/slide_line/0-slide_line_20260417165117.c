#include "slide_line.h"

/**
 * reverse_line - Reverse an integer array in place
 * @line: Array to reverse
 * @size: Number of elements in @line
 */
static void reverse_line(int *line, size_t size)
{
	size_t i, j;
	int tmp;

	if (size == 0)
		return;

	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		tmp = line[i];
		line[i] = line[j];
		line[j] = tmp;
	}
}

/**
 * slide_left - Slide and merge all values to the left
 * @line: Line to slide and merge
 * @size: Number of elements in @line
 */
static void slide_left(int *line, size_t size)
{
	size_t i, write_idx;
	int pending;

	write_idx = 0;
	pending = 0;

	for (i = 0; i < size; i++)
	{
		if (line[i] == 0)
			continue;

		if (pending == 0)
		{
			pending = line[i];
		}
		else if (pending == line[i])
		{
			line[write_idx++] = pending * 2;
			pending = 0;
		}
		else
		{
			line[write_idx++] = pending;
			pending = line[i];
		}
	}

	if (pending != 0)
		line[write_idx++] = pending;

	while (write_idx < size)
		line[write_idx++] = 0;
}

/**
 * slide_line - Slide and merge an integer array in one direction
 * @line: Array to slide
 * @size: Number of elements in @line
 * @direction: Sliding direction, SLIDE_LEFT or SLIDE_RIGHT
 *
 * Return: 1 on success, 0 on failure
 */
int slide_line(int *line, size_t size, int direction)
{
	if (line == NULL)
		return (0);

	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);

	if (direction == SLIDE_RIGHT)
		reverse_line(line, size);

	slide_left(line, size);

	if (direction == SLIDE_RIGHT)
		reverse_line(line, size);

	return (1);
}
