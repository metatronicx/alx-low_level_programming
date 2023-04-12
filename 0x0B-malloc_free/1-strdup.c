/**
 * _strdup - Returns a pointer to a new string which is a duplicate of the string str.
 *
 * @c: The char that the array should be initialized with.
 */

#include <stdlib.h>

char *_strdup(char *str) 
{
char *new_str = malloc(sizeof(char));
if (str == NULL)
{
return (NULL);
}
*new_str = *str;
return (*new_str);
}