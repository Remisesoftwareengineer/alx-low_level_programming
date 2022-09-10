#include <stdio.h>

/**
 * main-Entry point
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 100; number++)
	{
		putchar((number / 10) + '0');
		putchar((number % 10) + '0');
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (number != 99)
			{
				putchar(' , ');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
