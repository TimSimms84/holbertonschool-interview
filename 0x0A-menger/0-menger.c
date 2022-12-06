#include "menger.h"
#include <math.h>

/**
 * menger - Draws a 2D Menger Sponge
 * @level: The level of the Menger Sponge to draw
 */
void menger(int level)
{
	int size, row, col, i, j;
	char print;

	if (level < 0)
		return;

	size = pow(3, level);
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			i = row;
			j = col;
			print = '#'; /*default print - reassign each iteration*/
			while (i > 0 || j > 0)
			{
				if (i % 3 == 1 && j % 3 == 1) /*reassign print if it needs to be empty*/
					print = ' ';
				i /= 3;
				j /= 3;
			}
			printf("%c", print);
		}
		printf("\n");
	}
}
