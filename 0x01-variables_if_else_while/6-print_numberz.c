#include <stdio.h>
#include <ctype.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
