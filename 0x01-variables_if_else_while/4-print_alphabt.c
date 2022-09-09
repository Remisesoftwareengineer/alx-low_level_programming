#include <stdio.h>

/**
 *main-Entry point
 *Return:0
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
if (alphabet == 'e')
continue;
else if (alphabet == 'q')
continue;
putchar(alphabet);
putchar('\n');
return (0);
}
