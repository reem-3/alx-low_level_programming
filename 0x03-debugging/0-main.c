#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void positive_or_negative(i){
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

return (0);
}
