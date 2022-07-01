#include <stdio.h>

/**
 * main - prints the alphabets using putchar function
 *
 * Description: using the main funtion
 * this program print alphabets z-a in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
