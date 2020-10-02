#include "holberton.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string
 *
 * Return: string encoded with rot13
 */
char *rot13(char *s)
{
	int i, j;
	char letter[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rot13[]  = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
