#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include "ls.h"


void listDirectory(const char* path)
{
    struct dirent *entry;
    
    DIR *dir = opendir(path);

    if (dir == NULL)
    {
        perror("opendir Failed");
        return;
    }

    while((entry = readdir(dir)) != NULL)
    {
        printf("%s\n", entry->d_name);   
    }

    closedir(dir);
}