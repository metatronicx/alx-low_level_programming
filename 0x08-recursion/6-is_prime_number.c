#include <stdio.h>
#include <math.h>

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: (1) if @n is prime, (0) otherwise.
 */
int is_prime_number(int n)
{
	int i;
	
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	if (n % 2 == 0)
		return (0);

	i = 3;
	
	while (i <= sqrt(n))
	{
		if (n % i == 0)
			return (0);
		i += 2;
	}

	return (1);
}
