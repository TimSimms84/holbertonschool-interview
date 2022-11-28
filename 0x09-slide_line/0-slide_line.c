#include "slide_line.h"

/**
* slide_line - slides and merges an array of integers
* @line: pointer to array
* @size: size of array
* @direction: direction to merge
* Return: 1 on success, 0 on failure
*/
int slide_line(int *line, size_t size, int direction)
{
	if (!line || size < 1)
		return (0);
	if (direction == SLIDE_LEFT)
		return (slide_left(line, size));
	if (direction == SLIDE_RIGHT)
		return (slide_right(line, size));
	return (0);
}

/**
* add_left - adds the left side of the array
* @line: array
* @size: size of the array
*/
void add_left(int *line, size_t size)
{
	size_t k;

	for (k = 0; k < size - 1; k++)
	{
		if (line[k] == line[k + 1])
		{
			line[k] = line[k] + line[k + 1];
			line[k + 1] = 0;
		}
	}
}

/**
* add_right - adds the left side of the array
* @line: array
* @size: size of the array
*/
void add_right(int *line, size_t size)
{
	size_t k;

	for (k = size - 1; k > 0; k--)
	{
		if (line[k] == line[k - 1])
		{
			line[k] = line[k] + line[k - 1];
			line[k - 1] = 0;
		}
	}

}


/**
* slide_left - slides and merges an array of integers to the
* left if intergers match
* @line: pointer to array
* @size: size of array
* Return: 1 on success, 0 on failure
*/
int slide_left(int *line, size_t size)
{
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		if (line[i] == 0)
		{
			for (j = i; j < size; j++)
			{
				if (line[j] != 0)
				{
					line[i] = line[j];
					line[j] = 0;
					break;
				}
			}
		}
	}
	/* merge ints if match */
	add_left(line, size);
	/* slide greater than 0 ints to left most index */
	for (i = 0; i < size; i++)
	{
		if (line[i] == 0)
		{
			for (j = i; j < size; j++)
			{
				if (line[j] != 0)
				{
					line[i] = line[j];
					line[j] = 0;
					break;
				}
			}
		}
	}
	return (1);
}

/**
* slide_right - slides and merges an array of integers to the right if
* intergers match and move all zeros to the left
* @line: pointer to array
* @size: size of array
* Return: 1 if success, 0 if fail
*/
int slide_right(int *line, size_t size)
{
	size_t i, j;

	/* group ints together */
	for (i = size - 1; i <= size; i--)
	{
		if (line[i] == 0)
		{
			for (j = i; j <= size; j--)
			{
				if (line[j] != 0)
				{
					line[i] = line[j];
					line[j] = 0;
					break;
				}
			}
		}
	}
	/* merge ints if match */
	add_right(line, size);
	/* slide greater than 0 ints to right most index */
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (line[j] > 0 && line[j + 1] == 0)
			{
				line[j + 1] = line[j];
				line[j] = 0;
				break;
			}
		}
	}
	return (1);
}
