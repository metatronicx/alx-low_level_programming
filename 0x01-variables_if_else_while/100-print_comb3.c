#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10; j++) {
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
