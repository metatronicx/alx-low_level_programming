#include <stdio.h>
#include <stdlib.h>

/**
 * _pow_recursion - Calculates the value of x raised to the power of y recursively
 * @x: The base number
 * @y: The exponent
 *
 * Return: The value of x raised to the power of y, or -1 if an error occurs
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
