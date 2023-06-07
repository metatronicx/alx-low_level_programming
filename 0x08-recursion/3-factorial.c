#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - Calculates the factorial of a number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of the number, or -1 if an error occurs
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
