#include <stdio.h>

/**
 * main - program perform simple operations add, sub, mul, div, rest
 * @argc: count of number of the arguments
 * @argv: pointer to a arguments
 *
 * Return: result of the operation
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*' || argv[2] != '/'
	    || argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2] == '/' || argv[2] == '%' && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(num1, num2));
}
