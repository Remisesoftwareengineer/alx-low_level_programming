#include "main.h"

/**
 * _strchr - locate characters
 * @s: string
 * @c: charcter
 * Return: a pointer to the first occurrence of the character c or NULL
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
