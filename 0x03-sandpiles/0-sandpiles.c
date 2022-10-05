#include "sandpiles.h"
/**
 * add_grid - computes the sum of two sandpiles
 * @grid1: first gird
 * @grid2: grid to add to grid 1
 * Return: Void
 */
void add_grid(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			grid1[i][j] += grid2[i][j];
	}
}

/**
 * more_than_four - checks if an element is more than 4
 * @grid: grid
 * Return: 1 if more, 0 if less
 */
int more_than_four(int grid[3][3])
{
	int i;
	int j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
				return (1);
		}
	}
	return (0);
}

/**
 * print_grid - prints a grid
 * @grid: grid to print
 */

static void print_grid(int grid[3][3])
{
	int i, j;

	printf("=\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * sandfall - sand falls if more than 4
 * @grid: grid of sand
 */

void sandfall(int grid[3][3])
{
	int i, j;
	int temp[3][3] = {{0}};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
			{
				grid[i][j] -= 4;
				if ((i - 1) >= 0)
					temp[i - 1][j] += 1;
				if ((j - 1) >= 0)
					temp[i][j - 1] += 1;
				if ((i + 1) < 3)
					temp[i + 1][j] += 1;
				if ((j + 1) < 3)
					temp[i][j + 1] += 1;
			}
		}
	}
	add_grid(grid, temp);
}

/**
 * sandpiles_sum - add two grids and makes it stable
 * @grid1: first grid
 * @grid2: second grid
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	add_grid(grid1, grid2);
	while (more_than_four(grid1))
	{
		print_grid(grid1);
		sandfall(grid1);
	}
}
