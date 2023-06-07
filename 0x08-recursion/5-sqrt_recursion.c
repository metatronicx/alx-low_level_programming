#include <stdio.h>
#include <stdlib.h>

/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively
 * @n: The number to find the square root of
 *
 * Return: The square root if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int start = 1;
	int end = n;
	int mid = (start + end) / 2;        
    
        if (n < 0)
		return (-1); /* Negative number, no natural square root */

	if (n == 0 || n == 1)
		return (n); /* Base case: square root is the number itself */


	if (mid * mid == n)
		return mid; /* Found the natural square root */
	else if (mid * mid > n)
		return (_sqrt_recursion(n / 2)); /* Look in the lower half */
	else
	{
		int sub_result = _sqrt_recursion(n - mid);

		if (sub_result == -1)
			return (-1); /* No natural square root found */
		else
			return (mid + sub_result); /* Add the mid value */
	}
}
