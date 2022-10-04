#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of charts
 * @size: size of the arrays
 * @c: character to initialisze the array
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
