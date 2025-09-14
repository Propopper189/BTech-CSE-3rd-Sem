#include <stdio.h>
struct vector
{
    int i; 
    int j;
};
struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector v3;
    v3.i = v1.i + v2.i;
    v3.j = v1.j + v2.j;
    return v3;
} 
int main (){
    struct vector v1, v2, v3;
    v1.i = 2;
    v2.i = 3;
    v1.j = 4;
    v2.j = 5;
    v3 = sumVector(v1, v2);
    int res_i = v3.i;
    int res_j = v3.j;
    printf("%di + %dj", res_i, res_j);
    return 0;
}