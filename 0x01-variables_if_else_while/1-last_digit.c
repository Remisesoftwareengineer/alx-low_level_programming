#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-Entry point
 * Return 0 when it is successsful
 */
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
printf("Last digit of n is %i and is greater than 5\n", n);
else if (n % 10 == 0 )
printf("Last digit of n is %i and is 0\n", n);
else
printf("Last ddigit of n is %i and is less than 6 and not 0\n", n);
return (0);
}
