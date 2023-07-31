#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: The string to the searched.
 * @c: The charcter to be located.
 *
 * Return: If c is found - a pointer to the first occurance.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
