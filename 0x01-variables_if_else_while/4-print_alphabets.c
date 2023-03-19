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

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x == 'Q')
			continue;
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
