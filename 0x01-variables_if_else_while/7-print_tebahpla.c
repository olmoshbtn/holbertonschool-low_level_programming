#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int e = '\n';
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar(e);
return (0);
}
