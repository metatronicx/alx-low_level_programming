#include <stdio.h>

/**
 * _puts - Prints a string to stdout, followed by a new line
 *
 * @str: Pointer to the string to print
 *
 * Description:
 * This function takes a pointer to a null-terminated string as parameter
 * and prints the string, followed by a new line, to the standard output
 * stream (stdout).
 *
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
