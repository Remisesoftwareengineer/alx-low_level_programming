#include <stdio.h>
#include <mathlib.h>

/**
 * main-Entry point
 * Return: 0
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
