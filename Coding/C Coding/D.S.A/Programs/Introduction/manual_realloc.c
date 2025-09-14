 #include <stdio.h>
 #include <stdlib.h>

 int main (){
    int *pointerArray = (int*) malloc(3 * sizeof(int));
    int *tempArray = (int*) malloc(4 * sizeof(int));
    for(int i = 0; i<3; i++)
    {
        pointerArray[i] = i+1;
    }
    for(int i = 0; i<4; i++)
    {
        tempArray[i] = pointerArray[i];
    }
    tempArray[3] = 4;
    free(pointerArray);
    pointerArray = tempArray;
    for(int i = 0; i<4; i++)
    {
        printf("%d ", pointerArray[i]);
    }
    return 0;
 }