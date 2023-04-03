/**
 * _strchr - Locates the first occurrence of a character in a string
 *
 * @s: Pointer to the string to search
 * @c: The character to search for
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}

if (*s == c)
{
return (s);
}

return (NULL);
}
