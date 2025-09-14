#include <stdio.h>
    
int main (){
    int marks[4] = {12, 45, 56, 67};
    int* ptr = &marks[0];
    // int* ptr = marks[]; (same as int* ptr = &marks[0];)
    for(int i = 0; i<4; i++){
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }
    for(int i = 0; i<4; i++){
        printf("The value of marks at index %d is %d\n", i, *ptr);
        ptr++; // ptr = ptr + 1;
    }
    return 0;
}