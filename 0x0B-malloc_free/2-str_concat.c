/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
char *concat_str;
int s1_len = 0, s2_len = 0, i = 0, j = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[s1_len] != '\0')
{
s1_len++;
}
while (s2[s2_len] != '\0')
{
s2_len++;
}

concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));
if (concat_str == NULL)
{
return (NULL);
}

for (i = 0; i < s1_len; i++)
{
concat_str[i] = s1[i];
}

for (j = 0; j < s2_len; j++)
{
concat_str[i + j] = s2[j];
}

concat_str[i + j] = '\0';

return (concat_str);
}
