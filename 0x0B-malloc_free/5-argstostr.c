#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: count arguments
 * @av: vector arguments
 *
 * Return: NULL memory allocation fails, if ac is 0 or av is NULL,
 * otherwise return a pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, count;
	char *ptr_ac, *ptr_av;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			count++;
		}
		count++;
	}
	count += 1;

	ptr_ac = (char *) malloc(count * sizeof(char));

	if (ptr_ac == NULL)
	{
		return (NULL);
	}

	ptr_av = ptr_ac;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			*ptr_ac = av[i][j];
			ptr_ac++;
		}
		*ptr_ac = '\n';
		ptr_ac++;
	}
	return (ptr_av);
}
