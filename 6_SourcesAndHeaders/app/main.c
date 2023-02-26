#include <stdio.h>
#include <stdlib.h>

#include "my_lib.h"
#include "config.h"

int main(int argc, char *argv[])
{
    printf("Project Name: %s\n\r", PROJECT_NAME);
    printf("Project Version: %s\n\r", PROJECT_VERSION);
    sayHello();

    return EXIT_SUCCESS;
}
