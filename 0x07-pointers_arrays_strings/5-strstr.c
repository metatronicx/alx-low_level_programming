/**
 * _strstr - Locates a substring in a string
 *
 * @haystack: Pointer to the string to search
 * @needle: Pointer to the substring to find
 *
 * Return: Pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, j, k;

for (i = 0; haystack[i]; i++)
{
k = i;
j = 0;

while (haystack[k] == needle[j] && needle[j])
{
k++;
j++;
}

if (needle[j] == '\0')
{
return (&haystack[i]);
}
}
return (NULL);
}
