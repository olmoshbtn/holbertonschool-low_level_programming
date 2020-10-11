#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc: count argument
 * @argv: name argument
 *
 * Return: print the result of the multiplication, followed by a new line
 */

int main(int argc, char *argv[])
{
	int counter;
	int mult;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = atoi (argv[1]) * atoi (argv[2]);
        printf("%s\n", argv[counter]);
	return (0);
}
