#include <stdio.h>
   
int main (){
    int a[] = {1,2,3,4,5,6};
    int yes = 0;
    int sum;
    int target = 11;
    int size = sizeof(a)/sizeof(int);
    for(int i = 0; i<size; i++)
    {
        for(int j = 0; j<size; j++)
        {
            if(i == j)
            {
                continue;
            }
            else
            {
                sum = a[i] + a[j];
                if(sum == target)
                {
                    yes = 1;
                    break;
                }
            }
        }
        if(sum == target)
        {
            break;
        }
    }
    if(yes == 1)
    {
        printf("Target sum is present : %d", sum);
    }
    else
    {
        printf("Target sum is absent : %d", target);
    }
    return 0;
}