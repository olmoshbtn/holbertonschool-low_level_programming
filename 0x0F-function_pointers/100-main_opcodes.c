#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: count of the arguments
 * @argv: pointer
 *
 * Return: return
 */

int main(int argc, char *argv[])
{
	unsigned char *p = (char *) main;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < (atoi(argv[1]) - 1))
	{
		printf("%02x ", p[i]);
		i++;
	}
	printf("%02x\n", p[i]);
	return (0);
}
