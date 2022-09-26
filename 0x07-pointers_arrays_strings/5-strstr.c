#include "main.h"

/**
 * _strstr - first occurrence of the substring needle
 * @haystack: string
 * @needle: substring
 * Return:  located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			j++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
