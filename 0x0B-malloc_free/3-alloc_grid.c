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
	int **pptr, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	pptr = (int **)malloc(sizeof(int) * height);
	if (pptr == NULL)
	{
		free(pptr);
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		pptr[j] = (int *)malloc(sizeof(int) * width);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			pptr[j][k] = 0;
		}
	}
	return (pptr);
}
