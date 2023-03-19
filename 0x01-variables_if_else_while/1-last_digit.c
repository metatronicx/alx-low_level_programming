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
	int n, dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dgt = n % 10;
	if (dgt == 0)
		printf("Last digit of %d is %d and is 0\n", n, dgt);
	if (dgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, dgt);
	if (dgt < 6 && !(dgt >= 0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, dgt);
	return (0);
}
