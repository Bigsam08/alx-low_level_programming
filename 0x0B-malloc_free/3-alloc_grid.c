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
	int **olu;
	int i, p;

	if (width <= 0 || height <= 0)
		return (NULL);

	olu = malloc(sizeof(int *) * height);

	if (olu == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		olu[i] = malloc(sizeof(int) * width);

		if (olu[i] == NULL)
		{
			for (; i >= 0; i--)
				free(olu[i]);

			free(olu);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (p = 0; p < width; p++)
			olu[i][p] = 0;
	}

	return (olu);
}
