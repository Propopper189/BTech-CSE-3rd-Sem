#include <stdio.h>
#include <dirent.h>

int main()
{
    DIR *dir;
    struct dirent *entry;
    dir = opendir(".");
    while((entry = readdir(dir)) != NULL)
    {
        printf("%s ", entry->d_name);
    }
    return 0;
}