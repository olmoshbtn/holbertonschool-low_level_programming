#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: string
 *
 * Return: lentght of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}


/**
 * func_rec - function that returns the length of a string.
 * @s: string.
 * @len: lenght of the string.
 * @count: counter steps of the function.
 *
 * Return: function that response call from is_palindrome.
 */

int func_rec(char *s, int len, int count)
{
	if (count > len)
	{
		return (1);
	}
	else if (*(s + count) == *(s + len))
	{
		return (func_rec(s, len - 1, count + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function returns if a string is a palindrome or not.
 * @s: string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;
	int count = 0;

	return (func_rec(s, len, count));
}
