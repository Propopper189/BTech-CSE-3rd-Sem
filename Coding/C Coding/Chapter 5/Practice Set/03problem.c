//Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
//earth. Consider g = 9.8m/s2

// Program starts here 
float force(float);
float force(float a){
    return a*9.8;
}
#include <stdio.h>

int main (){
    float m;
    printf("Please enter mass in kg : ");
    scanf("%f", &m);
    printf("Force = %.2f Newtons", force(m));
    return 0;
}