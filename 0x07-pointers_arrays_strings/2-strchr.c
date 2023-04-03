/**
 * _strchr - Locates a character in a string
 *
 * @s: Pointer to the string to search
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return s;
}
s++;
}

if (c == '\0')
{
return s;
}

return NULL;
}
