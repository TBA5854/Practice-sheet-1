#include <stdio.h>
int main ()
{
    int y ;
    printf("Enter an year : ");
    scanf(" %d",&y);
    if (((y%4==0)&&(y%100!=0))||(y%400==0))
    {
        printf("The year %d is a Leap year",y);
    }
    else
    {
        printf("The year %d is not a Leap year",y);
    }
    return 0;
}