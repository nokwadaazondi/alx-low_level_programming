#include "main.h"

/**
 * _islower - Checkers for lowercase alphabet
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */

int _islower(int c)
{
	if (c >= 'n' && c <= 'z')
		return (1);
	else
		return (0);
}
