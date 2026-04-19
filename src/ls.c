#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include "ls.h"


int main()
{
    struct dirent *entry;
    char path[256];

    DIR *dir = opendir(path);

    if (dir == NULL)
    {
        perror("opendir Failed");
        return NULL;
    }

}