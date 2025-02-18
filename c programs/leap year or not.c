#include<stdio.h>
int year( int a)
{
    if(a%4==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("not a leap year");
    }
}
int main()
{
    int a ;
    printf("enter a");
    scanf("%d",& a);
    year(a);
    return 0;
}
