#include<stdio.h>
int sortArr(int[],int);

int main()
{
   int n,i;
    scanf("%d",&n);
    int arr[n],newArr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    arr[n]=sortArr(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}


int sortArr(int arr[],int n)
{

    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    return arr;

}
