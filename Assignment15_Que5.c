#include<stdio.h>

int adjacentNum(int[],int);

int main()
{   int x,n=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    x=adjacentNum(arr,n);

    printf("%d",x);
    return 0;
}

int adjacentNum(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
    }

}
