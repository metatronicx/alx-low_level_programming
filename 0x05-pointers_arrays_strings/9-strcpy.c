/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: buffer to copy to
 * @src: string to copy from
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}
