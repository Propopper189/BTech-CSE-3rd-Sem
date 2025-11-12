#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main()
{
    int choice, fd1, fd2;
    char src[10], dst[10], buffer[1024];
    printf("Enter the name of the source file: ");
    scanf("%s", src);
    printf("Enter the name of the destination file: ");
    scanf("%s", dst);
    printf("Enter 1 for first half & 2 for second half: ");
    scanf("%d", &choice);
    ssize_t size, half, rem;
    struct stat st;
    fd1 = open(src, O_RDONLY);
    fd2 = open(dst, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    fstat(fd1, &st);
    size = st.st_size;
    half = size/2;
    rem = half;
    if(choice == 2)
    {
        lseek(fd1, half, SEEK_SET);
    }
    else
    {
        lseek(fd1, 0, SEEK_SET);
    }
    ssize_t n;
    while((n = read(fd1, buffer, sizeof(buffer)))> 0 && (rem > 0))
    {
        if(n > rem)
        {
            n = rem;
        }
        write(fd2, buffer, n);
        rem -= n;
    }
    return 0;
}