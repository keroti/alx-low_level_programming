#include <stdio.h>

/**
 * main - prints the numbers using putcharf function
 *
 * Description: using the main funtion
 * this program prints numbers from 0-9 and a-f
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
