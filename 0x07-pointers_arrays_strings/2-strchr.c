#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer
 * @c: char
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (c != *s && *s != 0)
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return(0);
}
