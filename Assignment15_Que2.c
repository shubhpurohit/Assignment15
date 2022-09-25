#include<stdio.h>
int smallestEle(int[],int);

int main()
{
    int n=0,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    x=smallestEle(arr,n);
    printf("%d",x);
    return 0;
}

int smallestEle(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[0]>arr[i])
            arr[0]=arr[i];
    }
    return arr[0];
}
