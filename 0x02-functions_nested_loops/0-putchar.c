#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return : always 0 (success)
 */
int main(void)
{
	char abe[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar (abe[c]);
	}
	_putchar ('\n');
	return (0);
}
