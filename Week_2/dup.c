#include<stdio.h>
int binarysearch(int arr[],int a,int b,int key)
{
    int mid,count=0,i,j;
    if(b>=a)
    {
        mid= a + (b-a)/2;
    }
    if(arr[mid]==key)
    {
        count++;
        for(i=a;i<mid;i++)
        {
            if(arr[i]==key)
            {
                count++;
            }
        }
        for(j=mid +1;j<=b;j++)
        {
            if(arr[j]==key)
            {
                count++;
            }
        }
        return count;
    }
    if(arr[mid]>key)
    {
        return binarysearch(arr,a,mid-1,key);
    }
    if(arr[mid]<key)
    {
        return binarysearch(arr,mid +1,b,key);
    }
    return -1;
}
int main()
{
    int arr[10],key,i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    j=binarysearch(arr,0,n-1,key);
    printf("%d-%d",key,j);
    return 0;
}