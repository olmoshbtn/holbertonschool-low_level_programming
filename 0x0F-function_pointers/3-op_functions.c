#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - opration addition two integers
 * @a: first number to add
 * @b: second number to add
 * Return: addition
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - opration substraction two integers
 * @a: first number to substract
 * @b: second number to substract
 * Return: substraction
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - opration mutiplication two integers
 * @a: first number to multiply
 * @b: second number to multiply
 * Return: multiplication
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - opration divition two integers
 * @a: first number to divide
 * @b: second number to divide
 * Return: divition
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - opration module two integers
 * @a: first number to divide
 * @b: second number to divide
 * Return: module
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
