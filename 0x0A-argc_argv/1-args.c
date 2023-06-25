#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: Array of strings representing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int num_arguments = argc - 1;
(void)*argv;
printf("%d\n", num_arguments);
return (0);
}
