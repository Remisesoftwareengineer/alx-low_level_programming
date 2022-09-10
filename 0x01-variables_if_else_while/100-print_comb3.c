#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-Entry point
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 90; number++)
	{
		putchar((number / 10) + '0');
		putchar((number % 10) + '0');
		if (number != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
