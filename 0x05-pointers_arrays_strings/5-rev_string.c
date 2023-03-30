/**
 * rev_string - Reverses a string in place.
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int i, len = 0;
char temp;

while (s[len] != '\0')
{
len++;
}

for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
