#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up t0 9
 *
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)
{
	char pr;

	for (pr = 48; pr <= 57; pr++)
	{
	_putchar(pr);
	}
	_putchar('\n');
}
