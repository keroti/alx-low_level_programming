#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints sizeof various types
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int p;
	float f;

	printf("size of char: %u byte(s)\n", sizeof(c));
	printf("Size of an int: %u byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(p));
	printf("Size of a float: %ld byte(s)\n", sizeof(f))
	return (0);
}
