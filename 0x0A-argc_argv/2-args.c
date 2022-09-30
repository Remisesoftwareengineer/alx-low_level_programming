#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: counts the arguments
 * @argv: arguents
 * Return: 0 always of success
 */
int main(int argc, char *argv[])
{
/*Declaring variables*/
int count = 0;

if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
