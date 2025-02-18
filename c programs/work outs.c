#include<stdio.h>
int main()
{
    int n,low,high,mid,i,key,array[100];
    printf("enter the number of elements :");
    scanf("%d",n);
    printf("enter the integer :",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("enter element to find:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=low+high/2;
        if(array[mid]<key)
            low=mid+1;
        else if(array[mid]==key)
        {
            printf("key element found %d n",key,mid+1);
            break;
        }
        else
            high=mid-1;
    }
    if(low>high)
        printf("key element not found n",key);
    return 0;

}
