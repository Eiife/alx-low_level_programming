#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 *
 * Return: 0 if successful, non-zero if an error occurred
 */

int main(void)
{
	int c = 0;
	
	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	return (0);
}
