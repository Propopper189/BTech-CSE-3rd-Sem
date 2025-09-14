#include <stdio.h>
#include <stdlib.h>
void createArray(int size){
    int *arr = (int*) malloc(size*sizeof(int));
    // Allocate memory on heap.
    if(arr == NULL){
        printf("Memory Allocation Failed\n");
        return;
    }
    for(int i = 0; i<size; i++)
    {
        arr[i] = i*10; 
        // initialize array elements.
    }
    printf("Array Contents : ");
    for(int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
    // free(arr); 
}
int main(){createArray(5);/*call the function with size 5*/
return 0;
}

/*the heap memory allocated in the function will remain in place
after the function execution.

Reason : the memory allcated with malloc remains on the heap until
it is explicitly freed or the program terminates. if the memory is 
not freed, it results in a memory leak. Although the memory is still
allocated, it becomes inaccessible because there are no pointers referencing
it after the function exits*/