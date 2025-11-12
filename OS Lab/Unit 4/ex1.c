#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main()
{
    char dirname[10];
    scanf("%s", dirname);
    if(mkdir(dirname, 0755) == 0)
    {
        printf("Directory %s creation succcessful\n", dirname);
    }
    else
    {
        perror("Error creating directory");
    }
    return 0;
}