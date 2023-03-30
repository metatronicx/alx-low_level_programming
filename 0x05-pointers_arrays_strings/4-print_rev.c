/**
 * print_rev - Prints a string in reverse followed by a new line.
 *
 * @s: The string to be printed.
 */
#include <stdio.h>

void print_rev(char *s)
{
int i, len = 0;

while (s[len] != '\0')
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}

putchar('\n');
}
