// Let's work smartly

#include <stdio.h>
int fn(int *a, int size, int* count, int index, int target)
{
    if(index != size)
    {
        if(a[index] == target)
        {
            (*count)++;
        }
        fn(a, size, count, (index + 1), target);
    }
    return *count;
}
int main (){
    int a[] = {1, 3, 3, 3, 3, 3, 4, 4, 1, 5};
    int size = sizeof(a)/sizeof(int);
    int count = 0;
    int target = 3;
    fn(a, size, &count, 0, target);
    printf("%d Occurred %d Times", target, count);
    return 0;
}