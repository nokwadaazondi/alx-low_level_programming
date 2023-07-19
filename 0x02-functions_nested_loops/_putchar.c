#include "main.h"
#include <unistd.h>


/**
 * _putchar - write the character c to stdout
 * @c: the chaachter to print
 * Return: On Success 1.
 * On error, -1 is return, and errno is set appropriately.
 */

int _putchar(char c)

{
	return(write(1, &c, 1));
}
