#include <stdio.h>
#include <stdlib.h>

/**
 * main-Entry point
 * Return: 0
 */
int main(void)
{
	int num1 = 0, num2;
	
	while (num1 <= 99)
	{
		num1 = num2;
		while (num2 <= 99)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(' ');
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);
				if (num1 != 98 || num2 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');
	return (0);
}
