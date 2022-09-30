#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: counts the arguments
 * @argv: arguments
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignores argv*/
printf("%i\n", argc - 1);
return (0);
}
