#include <unistd.h>

/**
 * main - Entry point
 * Return: 1
 */

int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, sizeof(msg) - 1);
	return (1);
}
