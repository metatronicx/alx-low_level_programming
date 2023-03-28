/**
 * _strlen - Calculates the length of a string
 *
 * @s: Pointer to the string to calculate the length of
 *
 * Description:
 * This function takes a pointer to a null-terminated string as parameter
 * and calculates the length of the string, not including the terminating
 * null byte.
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
