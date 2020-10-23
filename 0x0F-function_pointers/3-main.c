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
<<<<<<< HEAD
	int num1, num2;
	char *op;
=======
	int call_func;
>>>>>>> 81caf31f04ae4ec35dac4fca64487ecd3eedc122

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

<<<<<<< HEAD
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
=======
	call_func = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", call_func);
>>>>>>> 81caf31f04ae4ec35dac4fca64487ecd3eedc122

	return (0);
}
