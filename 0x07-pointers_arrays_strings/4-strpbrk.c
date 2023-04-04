/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: Pointer to the string to search
 * @accept: Pointer to the string of acceptable characters
 *
 * Return: Pointer to the first matching byte in s,
 * or NULL if no match is found
 */
#include <stdio.h>

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}
