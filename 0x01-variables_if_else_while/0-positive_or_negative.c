#include <stdlib.h>
#include <time.h>

/**
 * main - print the string in the printf function
 *
 * Description: using the main function
 * this program prints whether n is positive or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%n is positive\n", int n);
	}
	if (n == 0)
	{
		pintf("%n is zero\n", int n);
	}
	if (n < 0)
	{
		printf("%n is negative\n", int n);
	}
	return (0);
}
