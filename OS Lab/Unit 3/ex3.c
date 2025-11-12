#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main()
{
    int fd1, fd2;
    fd1 = open("input.txt", O_RDONLY);
    fd2 = open("encrypted.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    char a;
    ssize_t n;
    while((n = read(fd1, &a, sizeof(a))) > 0)
    {
        a += 3;
        write(fd2, &a, sizeof(a));
    }
    close(fd1);
    close(fd2);
    return 0;
}