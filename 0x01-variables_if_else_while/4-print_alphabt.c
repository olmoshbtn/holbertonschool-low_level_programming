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
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
}
putchar(e);
return (0);
}
