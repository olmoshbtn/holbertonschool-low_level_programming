#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: count argument
 * @argv: name argument
 *
 * Return: print a number, followed by a new line.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
