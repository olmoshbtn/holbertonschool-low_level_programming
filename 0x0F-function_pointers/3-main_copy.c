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
	int (*f)(int, int);
	int num1, num2;
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = *get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = f(num1, num2);

	printf("%d\n", res);

	return (0);
}
