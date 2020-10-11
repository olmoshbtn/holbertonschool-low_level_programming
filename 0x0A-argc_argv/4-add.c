#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of the arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 *
 * Return: 1 number with no digit, 0 no number, result add
 */

int main(int argc, char *argv[])
{
	int add = 0, fs, ss;

	if (argc > 1)
	{
		for (fs = 1; fs < argc; fs++)
		{
			for (ss = 0; argv[fs][ss] != '\0'; ss++)
			{
				if (argv[fs][ss] < 48 || argv[fs][ss] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[fs]);
		}
	}
	printf("%d\n", add);

	return (0);
}
