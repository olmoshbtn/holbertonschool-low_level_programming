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
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i < '9' )
putchar(',');
putchar(' ');
}
putchar(e);
return (0);
}
