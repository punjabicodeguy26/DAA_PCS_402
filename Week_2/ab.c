#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int countpair(int arr[],int n,int key)
{
    int i,j,k,count=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            k=arr[i]-arr[j];
            if(abs(k)==key)
            {
                count++;
            }
        }
    }
    return count;
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
    j=countpair(arr,n,key);
    printf("%d",j);
    return 0;
}