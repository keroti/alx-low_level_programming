#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "and that piece of art is useful\" - Dora Korpar, 2015-10-19"
 * followed by a new line, to the standard error.
 * Return: 1
 */
int main(void)
{
	fwrite(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
