#include<stdio.h>
int main()
{
    int a=45;
    int*ptr;//pointer variable
    ptr=&a;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(&a));
    printf("%d\n",&ptr);
    return 0;
}
