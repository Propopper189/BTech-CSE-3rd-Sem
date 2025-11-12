#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main()
{
    int fd;
    fd = open("sample.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
    write(fd, "This is a sample text\n", 22);
    if(chmod("sample.txt", S_IRUSR | S_IWUSR) < 0)
    {
        printf("Error changing permissions\n");
        return -1;
    }
    if(link("sample.txt", "sample_hardlink.txt") < 0)
    {
        printf("Error creating hard link\n");
        return -1;
    }
    if(symlink("sample.txt", "sample_softlink.txt") < 0)
    {
        printf("Error creating hard link\n");
        return -1;
    }
    
    return 0;
}