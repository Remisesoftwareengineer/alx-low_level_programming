#include <stdio.h>

/**
 * main-print strings using printf function
 * Description: using the main function
 * this program prints exactly and that piece of art is useful\" - Dora Korpar, 2015-10-19
 * Return: 0
 * */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful""\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}
