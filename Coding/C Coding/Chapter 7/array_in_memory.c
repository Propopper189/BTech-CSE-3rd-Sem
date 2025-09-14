#include <stdio.h>
    
int main (){
    int marks[5];
    for(int i = 0; i<5; i++){
        printf("Enter marks of student %d\n", i+1);
        scanf("%d", &marks[i]);
    }
    for(int i = 0; i<5; i++){
        printf("The address of marks at index %d is %u\n", i, &marks[i]);
        // Each element in the array has a unique memory address.
        // The addresses are next to each other in memory.
    }
    return 0;
}