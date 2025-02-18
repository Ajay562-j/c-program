#include<stdio.h>
int main()
{
int i,low,high,mid,n,key,array[100];
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter %d number:",n);
for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("Enter the value to find\n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
    mid=(low+high)/2;
    if(array[mid]<key)
    low=mid+1;
    else if(array[mid]==key)
    {
        printf("found at location %d n",key,mid+1);
        break;
    }
    else
        high=mid-1;
}
if(low>high)
printf("not found %d isn't present in list n",key);
return 0;
}
