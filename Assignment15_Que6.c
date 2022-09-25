#include<stdio.h>
int inputArray(int);
void dispRev(int[],int);

int main()
{
    int n;
    scanf("%d",&n);
      int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }



    dispRev(arr,n);

    return 0;


}




void dispRev(int arr[],int n)
{
   for(int i=n-1;i>=0;i--)
        printf("%d",arr[i]);
}

