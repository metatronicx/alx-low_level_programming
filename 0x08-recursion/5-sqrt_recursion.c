#include <stdio.h>

/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively
 * @n: The number to find the square root of
 *
 * Return: The square root if found, -1 otherwise
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1); /* Negative number, no natural square root */

    int start = 0;
    int end = n;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int square = mid * mid;

        if (square == n)
            return (mid); /* Found the natural square root */
        else if (square > n)
            end = mid - 1; /* Look in the lower half */
        else
            start = mid + 1; /* Look in the upper half */
    }

    return (-1); /* No natural square root found */
}
