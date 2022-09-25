#include<stdio.h>
int countDup(int[],int);

int main()
{
    int x,n=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    x=countDup(arr,n);
    printf("%d",x);
    return 0;
}

int countDup(int arr[],int n)
{
    int i,j,count=0;
for(i=0;i<n;i++)
{

    for(j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
            count++;

    }

}
return count;
}

