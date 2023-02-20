#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1
 */

int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, "
				"2015-10-19\n";

	const int len = sizeof(msg) - 1;

	write(2, msg, len);
	return (1);
}
