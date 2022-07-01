#include <stdio.h>

/**
 * main - prints the numbers using utcharf function
 *
 * Description: using the main funtion
 * this program prints numbers from 0-9
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
