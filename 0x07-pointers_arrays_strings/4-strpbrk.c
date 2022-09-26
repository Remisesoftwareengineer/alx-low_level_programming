#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * @s: string
 * @accept: string from which the bytes are searched
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
