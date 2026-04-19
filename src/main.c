#include <stdio.h>
#include "ls.h"

int main (int argumentValue,char *argumentVector[])
{
    if (argumentValue < 2) {
        printf("Use: %s <directory>\n", argumentVector[0]);
        return 1;
    }

    listDirectory(argumentVector[1]);
    return 0;
}