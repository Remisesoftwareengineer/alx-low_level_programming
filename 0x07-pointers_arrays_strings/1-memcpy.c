#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n: number of bytes
 * @src: memory area to copy from
 * @dest: memory area to be copied to
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
