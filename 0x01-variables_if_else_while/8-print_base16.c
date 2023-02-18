#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 *
 * Return: 0 if successful, non-zero if an error occurred
 */

int main(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
