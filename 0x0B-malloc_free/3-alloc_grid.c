#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a 2-dimensional
 *               array of integers
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array.
 * Return: NULL, If width or  height is 0, or the function fails
 *         else - a pointer to the 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **d;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	d = malloc(sizeof(int *) * height);

	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		d[i] = malloc(sizeof(int) * width);

		if (d[i] == NULL)
		{
			for (; i >= 0; i--)
				free(d[i]);

			free(d);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			d[i][j] = 0;
	}
	return (d);
}
