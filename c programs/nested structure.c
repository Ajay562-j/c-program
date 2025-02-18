#include<stdio.h>
struct child
{
    int a;
    char c;
};
struct parent
{
    int b;
    struct child c1;
};
int main()
{
    struct parent p1={12,34,'J'};
    printf("value of b=%d",p1.b);
    printf("value of b=%d",p1.c1.a);
    printf("value of c=%c",p1.c1.c);
}
