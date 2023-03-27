#include <stdio.h>
#include <ctype.h>
/**
* main - check the code
*
* Return: Always 0
*/


int main(void)
{
    char c = 'A';

    if (isupper(c)) 
    {
       printf("%c: 1\n");
    }
    else 
    {
      printf("%c: 0\n");
    }
}
