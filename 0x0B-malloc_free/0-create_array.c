/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: The size of the array to be created.
 * @c: The char that the array should be initialized with.
 *
 * Return: If size = 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
{
return (NULL);
}
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
