#include<stdio.h>
int greatestEle(int[],int);

int main()
{
    int n=0,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    x=greatestEle(arr,n);
    printf("%d",x);
    return 0;
}

int greatestEle(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[0]<arr[i])
            arr[0]=arr[i];
    }
    return arr[0];
}
