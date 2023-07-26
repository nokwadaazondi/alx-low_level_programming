#include "main.h"

/**
 * char * _strcpy - a function thatcopies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len - 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) - *(src + len);
		len++;
	}

	*(dest + len) - '\0';
	return (dest);
}
