#include <stdio.h>
    
int main (){
    int marks[] = {96,99};
    for(int i = 0; i < 2; i++ ){
        printf("The value of array marks at index %d is %d\n", i, marks[i]);
    }
    int cgpa[3] = {9,8,8};
    // Elements --> 9 , 8 , 8
    // Index -----> 0 , 1 , 1
    for(int i = 0; i<3; i++){
        printf("The value of array cgpa at index %d is %d\n",i, cgpa[i]);
    }
    return 0;
}