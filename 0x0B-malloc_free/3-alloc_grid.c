#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **zz;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	zz = malloc(sizeof(int *) * height);
	if (zz == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		zz[x] = malloc(sizeof(int) * width);
			if (zz[x] == NULL)
			{
				for (; x >= 0; x--)
					free(zz[x]);
				free(zz);
				return (NULL);
			}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			zz[x][y] = 0;
	}
	return (zz);
}
