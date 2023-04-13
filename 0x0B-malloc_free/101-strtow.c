#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - a function that frees a 2 dimensional array
 * @grid: the multidimensional array of char
 * @height: the height of the array
 * Return: none
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - a function that splits a string into words
 * The function returns a pointer to an array of strings (words)
 * Each element of this array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 * @str: string
 * Return: NULL or a pointer of an array of strings (words)
 */

char **strtow(char *str)
{
	char **split;
	unsigned int c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	split = malloc((height + 1) * sizeof(char *));
	if (split == NULL || height == 0)
	{
		free(split);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				split[i] = malloc((c - k + 2) * sizeof(char));
				if (split[i] == NULL)
				{
					ch_free_grid(split, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; split <= c; k++, j++)
			split[i][j] = str[a1];
		split[i][j] = '\0';
	}
	split[i] = NULL;
	return (split);
}
