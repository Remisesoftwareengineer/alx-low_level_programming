#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: it's the character holder
 * Return: half of the strings
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
