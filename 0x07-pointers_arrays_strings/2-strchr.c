#include "main.h"

/**
 * _strchr - locate characters
 * @s: string
 * @c: charcter
 * Return: a pointer to the first occurrence of the character c or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == C)
		return (s + i);
	return (0);
}
