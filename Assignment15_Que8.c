#include<stdio.h>
void printUni(int[],int);

int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printUni(arr,n);

    return 0;
}

void printUni(int arr[],int n)
{
    int i,j,count;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count==1)
            printf("%d ",arr[i]);
    }

}
