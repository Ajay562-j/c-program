#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fptr;
fptr=fopen("C:\\Users\\abask\\OneDrive\\Documents\\Hello.txt","a");
char c[50]
fgets(c,50,fptr);
printf("%s");

fclose(fptr);
 return 0;
}
