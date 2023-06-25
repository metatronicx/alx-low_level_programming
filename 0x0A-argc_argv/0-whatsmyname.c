#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *program_name = argv[0];
    char *name;

    name = strrchr(program_name, '/');
    
    if (name == NULL) {
        name = program_name;
    } else {
        name = program_name;
    }

    printf("%s\n", name);

    return 0;
}