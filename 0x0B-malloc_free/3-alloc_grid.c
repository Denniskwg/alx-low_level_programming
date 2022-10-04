#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns of 2d array if 0 or <0 return NULL
 * @height: number of rows of 2d array if 0 or <0 return NULL
 * Return: pointer to 2d array allocated space by malloc else
 * null if malloc fails
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **pptr, *ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	pptr = malloc(sizeof(pptr) * height);
	if (pptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pptr[i] = malloc(sizeof(ptr) * width);
		if (pptr[i] == NULL)
		{
			free(pptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			pptr[i][j] = 0;
		}
	}
	return (pptr);
}
