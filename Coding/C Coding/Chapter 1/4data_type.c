#include<stdio.h>
int main (){
    //Int is for integers.
    int a;
    a = 1;
    printf("%d\n", a);
    //It is same as :-
    int b = 1;
    printf("%d\n",b);
    //float is for decimals
    float c;
    c = 1.9;
    printf("%f\n",c);
    //It is same as :- 
    float d = 1.9;
    printf("%f\n",d); //"%f" is the library function for float variable, "%f" gets replaced with "a".
    //char data type is used to store single character, eg : 'a', '$', etc.
    char e;
    e = '#'; //the value of char should always be in single quotation.
    printf("%c\n", e); //"%c" is the library function for char data type. "%c" is replaced by "a".
    //It is same as :-
    char f = 'A';
    printf("%c\n", f);
    return 0;
}