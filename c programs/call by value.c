#include<stdio.h>
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("After swaping x=%d\t y=%d\n",*x,*y);
}
int main()
{
    int a,b;
    a=4;
    b=5;
    printf("before swapping a=%d\t b=%d\n",a,b);
    swap(&a,&b);//fun calling
    printf("after swapping a=%d\t b=%d",a,b);
}
