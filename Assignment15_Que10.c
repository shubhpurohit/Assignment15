#include<stdio.h>

int countFreq(int[],int);

int main()
{
    int n=0;
    scanf("%d ",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    countFreq(arr,n);
    return 0;

}

int countFreq(int arr[],int n)
{
    int i,j,count;

    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
          {
              if(arr[i]==arr[j])
              {
                  count++;
                  arr[j]=-1;
              }
          }
          if(arr[i]!=-1)
          printf(" %d %d ",arr[i],count);
    }
}
