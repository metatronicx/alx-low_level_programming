/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: Pointer to the string to search
 * @accept: Pointer to the string of acceptable characters
 *
 * Return: Number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
break;
}
}

if (!accept[j])
{
break;
}
}

return (i);
}
