#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory
 * @s: pointer
 * @b: constant byte
 * @n: memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
