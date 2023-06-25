#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *program_name = argv[0];
    char *name;

    // Find the last occurrence of '/' to get the program name
    name = strrchr(program_name, '/');
    
    if (name == NULL) {
        // No '/' found, use the whole program name
        name = program_name;
    } else {
        // Include the path along with the program name
        name = program_name;
    }

    printf("%s\n", name);

    return 0;
}