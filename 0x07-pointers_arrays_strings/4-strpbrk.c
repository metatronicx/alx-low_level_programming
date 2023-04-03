/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: Pointer to the string to search
 * @accept: Pointer to the string of acceptable characters
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;

while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}

s++;
}

return (NULL);
}
