void display(); // void doesn't return any value.
// we can't write --> int c = display();
#include <stdio.h>
int main (){
    display(); // calling function
    printf("OK\n"); 
    display(); // calling function
    return 0;
}
void display(){
    printf("Hi, I Am Function\n");
}