#include <stdio.h>

int main (){
    int a[] = {1,2,3,4,5,6};
    int target = 11;
    int left = 0;
    int size = sizeof(a)/sizeof(int);
    int right = size-1;
    int sum;
    int yes = 0;
    while(left != right)
    {
        sum = a[left] + a[right];
        if(sum == target)
        {
            yes = 1;
            break;
        }
        if(target<sum)
        {
            right--;
        }
        else if(target>sum)
        {
            left++;
        }
    }
    if(yes == 1)
    {
        printf("Target sum's indices : %d and %d", left, right);
    }
    else
    {
        printf("Target Sum was not found");
    }
    return 0;
}