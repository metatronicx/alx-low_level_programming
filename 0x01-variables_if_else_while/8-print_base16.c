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

	for (x = 0; x < 16; x++)
	{
		if (x < 10)
			putchar(x + '0');
		else
			putchar('a' + (x - 10));
	}
	putchar('\n');
	return (0);
}
