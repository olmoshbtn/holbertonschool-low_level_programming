#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program perform simple operations add, sub, mul, div, rest
 * @argc: count of number of the arguments
 * @argv: pointer to a arguments
 *
 * Return: result of the operation
 */

int main(int argc, char *argv[])
{
	int call_func;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	call_func = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", call_func);

	return (0);
}
