#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid (size of every array of integers)
 * @height: height of the grid (number of array of integers).
 *
 * Return: Pointer to the array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			return (NULL);
		}
	}


	return (ptr);
}
