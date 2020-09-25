#include <stdio.h>

/**
 * main - Print numbers 0 to 100.
 *
 * Return: Always 0.
 */

int main()
{
	int a;

	for (a = 1 ; a <= 100; a++)
	  {
	    if (a % 3 == 0)
	      {
		printf("Fizz");
	      }
	    else if (a % 5 == 0)
	      {
		printf("Buzz");
	      }
	    else if ((a % 3 == 0) && (a % 5 == 0)) 
	      {
		printf("FizzBuzz");
	      }
	    else
	      {
		printf("%d", a);
	      }
	    if (a < 100)
	      {
		putchar(' ');
	      }
	    else 
	      putchar('\n');
	  }
	return (0);

}
