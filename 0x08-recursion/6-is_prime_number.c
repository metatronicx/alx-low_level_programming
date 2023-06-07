#include <stdio.h>
#include <stdio.h>

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0); /* Numbers less than or equal to 1 are not prime */

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0); /* Found a factor, not prime */
	}

	return (1); /* No factors found, prime */
}

