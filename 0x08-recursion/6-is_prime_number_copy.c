#include "holberton.h"

/**
 * func -  function that returns if the input integer is a prime number.
 * @n: number pass by function is_prime_number.
 * @m: number assigned for iteration.
 *
 * Return: returns 1 if the input int is a prime number, otherwise return 0.
 */

int func(int n, int m)
{
	if (n < 2)
		return (0);
	if (n % m == 0 && n != 0)
		return (0);
	if (n == m)
		return (1);
	return (func(n, m + 1));
}
/**
 * is_prime_number - function returns if the input integer is a prime number.
 * @n: number has to determine if it is prime
 *
 *
 * Return: if the number is prime.
 */
int is_prime_number(int n)
{
	return (func(n, 2));
}
