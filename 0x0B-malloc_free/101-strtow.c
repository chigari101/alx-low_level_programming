#include <stdlib.h>
#include "main.h"

/**
 * ch_free_grid - splits a string into words.
 * @grid: multidimensional array of characters.
 * @height: height of an array.
 *
 * Return: nothing.
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
 * strtow - split a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers.
 */
char **strtow(char *str)
{
	char **stow;
	unsigned int c, height, i, j, l;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	stow = malloc((height + 1) * sizeof(char *));
	if (stow == NULL || height == 0)
	{
		free(stow);
		return (NULL);
	}
	for (i = l = 0; i < height; i++)
	{
		for (c = l; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				l++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				stow[i] = malloc((c - l + 2) * sizeof(char));
				if (stow[i] == NULL)
				{
					ch_free_grid(stow, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; l <= c; l++, j++)
			stow[i][j] = str[l];
		stow[i][j] = '\0';
	}
	stow[i] = NULL;
	return (stow);
}
