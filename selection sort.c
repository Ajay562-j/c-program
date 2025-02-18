#include<stdio.h>
int main()
{
    int arr[]={124,12,78,34,90,01};
    int n=sizeof(arr)/sizeof(arr[0]);
    int minindex,i,j,temp;
    for(i=0;i<n;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        if(minindex!=i)
        {
            temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    return 0;
}
