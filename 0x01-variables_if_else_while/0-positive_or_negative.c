#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("the number  %i: is positive \n", n);
}
else if (n < 0)
{
printf("the number %i: is negative \n", n);
}
else
{
printf("the number %i: is zero \n", n);
}
return (0);
}
