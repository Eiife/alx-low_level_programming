#include "main.h"

/**
 * print_alphabet - check the code for ALX School students
 *
 * Return : always 0 (success)
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;
	}
	_putchar ('\n');
	return (0);
}
