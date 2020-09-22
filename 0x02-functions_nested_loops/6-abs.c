#include "holberton.h"
/**
 * _abs - Entry point
 * @num: no_olvidar
 * Return: void
 */
int _abs(int num)
{
if (num > 0)
{
return (num);
}
else if (num < 0)
{
return (num * (-1));
}
else
{
return (0);
}
}
