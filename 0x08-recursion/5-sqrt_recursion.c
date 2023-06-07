#include <stdio.h>
#include <stdlib.h>
/**
 * _sqrt_recursion_helper - Recursive helper function to find the square root
 * @n: The number to find the square root of
 * @start: The starting index of the search range
 * @end: The ending index of the search range
 *
 * Return: The natural square root of n, or -1 if not found
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	if (start > end)
		return -1;  /* No natural square root found */

	int mid = start + (end - start) / 2;
	int square = mid * mid;

	if (square == n)
		return mid;  /* Found the natural square root */
	else if (square > n)
		return _sqrt_recursion_helper(n, start, mid - 1);  /* Look in the lower half */
	else
		return _sqrt_recursion_helper(n, mid + 1, end);  /* Look in the upper half */
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number recursively
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;  /* Negative number, no natural square root */

	return _sqrt_recursion_helper(n, 0, n);
}

int main(void)
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	int squareRoot = _sqrt_recursion(number);
	if (squareRoot == -1)
		printf("No natural square root found.\n");
	else
		printf("The square root of %d is %d\n", number, squareRoot);

	return 0;
}

