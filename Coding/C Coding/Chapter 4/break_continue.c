#include <stdio.h>
int main (){
    int i = 0;
    for (i; i<15; i++){
        printf("%d\n", i);
        if(i==5){
            // break; //Exit the loop now.
            continue; //Skip this iteration now. The code will not print 5.
        }
    }
    printf("For loop is done");
    return 0;
}