#include <stdio.h>
    
int main (){
    int a[] = {1,2,3,4,5,6};
    int yes = 0; 
    int size = sizeof(a)/sizeof(int);
    int sum;
    int target = 11;
    int left = 0;
    int right = size-1;
    while(left != right)
    {
        sum = a[left] + a[right];
        if(sum == target)
        {
            yes = 1;
            break;
        }
        if(sum>target)
        {
            right--;
        }
        if(sum<target)
        {
            left++;
        }
    }
    if(yes == 1)
    {
        printf("Taget sum was found at indices : %d and %d", left, right);
    }
    else
    {
        printf("Target sum was not found");
    }
    return 0;
}