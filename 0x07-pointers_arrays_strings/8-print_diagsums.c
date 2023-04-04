/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: The size of the matrix.
 *
 * Return: Nothing.
 */
#include<stdio.h>

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size * size; i += size + 1)
{
sum1 += a[i];
}

for (i = size - 1; i < size * size - 1; i += size - 1)
{
sum2 += a[i];
}

printf("%d, %d\n", sum1, sum2);
}
