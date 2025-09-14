/*
Write a structure capable of storing date. 
Write a function to compare those dates.
*/

#include <stdio.h>
struct date
{
    int dd;
    int mm; 
    int yyyy;
};
int compare(struct date a, struct date b)
{
    int variable;
    if((a.yyyy==b.yyyy) && (a.mm==b.mm) && (a.dd==b.dd))
    {
        return 0;
    }
    if(a.yyyy>b.yyyy)
    {
        return 1;
    }
    else if(b.yyyy>a.yyyy)
    {
        return -1;
    }
    else if(a.mm>b.mm)
    {
        return 1;
    }
    else if(b.mm>a.mm)
    {
        return -1;
    }
    else if(a.dd>b.dd)
    {
        return 1;
    }
    else if(b.dd>a.dd)
    {
        return -1;
    }
}
int main (){
    struct date d1 = {27,2,2004};
    struct date d2 = {2,1,2001};
    int check = compare(d1,d2);
    if(check==0)
    {
        printf("Both dates are same");
        return 0;
    }
    else if(check == 1)
    {
        printf("Day->2 comes first");
        return 0;
    }
    else if(check == -1)
    {
        printf("Day->1 comes first");
        return 0;
    }
    return 0;
}