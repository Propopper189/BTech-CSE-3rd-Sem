#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{
    char a;
    int fd;
    fd = open("input.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if(fd < 0)
    {
        printf("Error opening file\n");
        return -1;
    }
    int d;
    scanf("%c", &a);
    while(a != '$' && (d = write(fd, &a, sizeof(a))) > 0 )
    {
        scanf("%c", &a);
        if(d < 0)
        {
            printf("error printing\n");
            return -1;
        }
    }
    return 0;
}