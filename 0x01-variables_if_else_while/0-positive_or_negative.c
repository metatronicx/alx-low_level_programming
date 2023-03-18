#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is 0\n", n);
	if (n > 0)
		printf("%d is greater than 0\n", n);
	if (n < 0)
		printf("%d is lesser than 0\n", n);
	return (0);
}
