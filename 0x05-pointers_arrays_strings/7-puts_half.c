/**
 * puts_half - Prints the second half of a string.
 *
 * @str: The string to be printed.
 */
#include <stdio.h>

void puts_half(char *str)
{
int len, i;

for (len = 0; str[len] != '\0'; len++)
{
;
}
for (i = (len + 1) / 2; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
}
