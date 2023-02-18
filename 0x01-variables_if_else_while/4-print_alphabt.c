#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Return: 0 if successful, non-zero if an error occurred
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
