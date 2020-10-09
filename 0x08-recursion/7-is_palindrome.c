#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: pointer
 *
 * Return: void.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * func_rec - function that returns the length of a string.
 * @s: pointer
 * @ini: int for count
 * @last: int for count
 *
 * Return: function that response call from is_palindrome.
 */

int func_rec(char *s, int ini, int last)
{
if (s[ini] != s[last])
	return (0);
else if (ini >= last)
	return (1);
else
	return (func_rec(s, ini + 1, last - 1));
}
/**
 * is_palindrome - function returns if a string is a palindrome or not.
 * @s: pointer
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int ini, last;

	ini = 0;
	last = _str_recursion(s, ini, last - 1);
}
