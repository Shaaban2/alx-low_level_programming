/**
 * ch_free_grid - frees a 2 dimensional array of char.
 * @grid: the array to be freed.
 * @height: the height of the array.
 *
 * This function frees a 2 dimensional array of characters.
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
 * strtow - splits a string into words.
 * @str: the string to be split.
 *
 * Return: a pointer to an array of strings.
 *
 * This function splits a string into an array of strings,
 *  where each string
 * corresponds to a word in the original string.
 * The array of strings is
 * dynamically allocated and the caller is responsible 
 * for freeing the memory
 * once the array is no longer needed.
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int c, height, m, k, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (m = a1 = 0; m < height; m++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[m] = malloc((c - a1 + 2) * sizeof(char));
				if (aout[m] == NULL)
				{
					ch_free_grid(aout, m);
					return (NULL);
				}
				break;
			}
		}
		for (k = 0; a1 <= c; a1++, k++)
			aout[m][k] = str[a1];
		aout[m][k] = '\0';
	}
	aout[m] = NULL;
	return (aout);
}

