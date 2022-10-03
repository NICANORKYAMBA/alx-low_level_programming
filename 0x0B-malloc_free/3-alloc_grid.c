#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **twoDarray;
	int height_index;
	int width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDarray = malloc(height * sizeof(int *));

	if (twoDarray == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		twoDarray[height_index] = malloc(width * sizeof(int));
		if (twoDarray[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(twoDarray[height_index]);
			free(twoDarray);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			twoDarray[height_index][width_index] = 0;
	}

	return (twoDarray);
}
