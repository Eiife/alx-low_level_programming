#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 *
 * Return: 0 if successful, non-zero if an error occurred
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
