#include <stdio.h>
#ifdef UNUSED
#elif defined(__GNUC__)
# define UNUSED(x) (UNUSED_ ## x __attribute__((unused)))
#elif defined(__LCLINT__)
# define UNUSED(x) /*@unused@*/ x
#else
# define UNUSED(x) x
#endif

/**
 * main - program that prints its name, followed by a new line.
 * @argc: count argument
 * @argv: name argument
 * @UNUSED: parameter
 * Return: print the name of the program.
 */

int main(int UNUSED(argc), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
