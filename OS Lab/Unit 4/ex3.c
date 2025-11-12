#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main()
{
    char dirname[10];
    scanf("%s", dirname);
    if(rmdir(dirname) == 0)
    {
        printf("Directory deletion successful\n");
    }
    else
    {
        perror("error deleting directory");
    }
    return 0;
}