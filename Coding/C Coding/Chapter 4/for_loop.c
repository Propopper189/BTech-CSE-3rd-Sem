/*
for (initialize; test; increment or decrement)
    {
        //code;
    }



Program : 

#include <stdio.h>
int main (){
    int n = 6;
    for(int i = 0; i<6; i = i + 1 ){ //no semi colon at the end of increment/decrement phase.
        printf("%d\n", i);
    }

    return 0;
}

Is same as 
*/

#include <stdio.h>
int main (){
    int n = 6;
    for(int i = 1; i<=6; i++){
        printf("The value of i is %d\n", i);
    }
    return 0;
}