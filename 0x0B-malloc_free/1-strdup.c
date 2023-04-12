/**
 * _strdup - duplicates a string in a new memory allocation
 * @str: the string to duplicate
 *
 * Return: a pointer to the new string,
 * or NULL if str is NULL or malloc fails
 */
#include <stdlib.h>

char *_strdup(char *str)
{
char *dup;
int len, i;

if (str == NULL)
{
return (NULL);
}

len = 0;
while (str[len] != '\0')
{
len++;
}

dup = malloc((len + 1) * sizeof(char));
if (dup == NULL)
{
return (NULL);
}

for (i = 0; i <= len; i++)
{
dup[i] = str[i];
}

return (dup);
}
