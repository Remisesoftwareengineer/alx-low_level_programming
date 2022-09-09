#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-Entry point
 * Description: using printf function
 * Return: 0 if it is a success
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;             

if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is negative\n", n);		
}
return (0);
}
