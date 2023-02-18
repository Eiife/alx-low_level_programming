#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the program
 *
 * Return: 0 if successful, non-zero if an error occurred
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{ 
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
