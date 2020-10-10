#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: count argument
 * @argv: name argument
 *
 * Return: print the name of the program.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
