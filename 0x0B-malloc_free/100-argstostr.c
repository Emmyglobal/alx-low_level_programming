#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 *             arguments are separated by a new line in the string.
 * __strlen -> a function that counts lenght.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */

int __strlen(char **av)
{
	int i, j, len = 0;

	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	return (len);
}

char *argstostr(int ac, char **av)
{
	int size, i, j = 0, k;
	char *ptr;

	if (!ac || !av)
		return (NULL);
	size = __strlen(av) + ac + 1;

	ptr = malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (; av[j]; j++)
		{
			for (k = 0; av[j][k]; k++, i++)
			{
				ptr[i] = av[j][k];
			}
			ptr[i] = '\n';
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
