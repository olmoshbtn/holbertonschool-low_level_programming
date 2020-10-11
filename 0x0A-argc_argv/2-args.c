#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: count argument
 * @argv: name argument
 *
 * Return: print one argument per line, ending with a new line.
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
