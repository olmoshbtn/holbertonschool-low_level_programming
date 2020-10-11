#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: print the result of the multiplication, followed by a new line
 */

int main(int argc, char *argv[])
{
	int mult, i;

	if (argc >= 3)
	{
		mult = 1;
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}

	else

	printf("Error\n");
	return (1);
}
