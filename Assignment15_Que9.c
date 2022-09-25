#include<stdio.h>
int mergeArr(int[],int[],int);


int main()
{
    int i,n=0;
    scanf("%d",&n);
    int x=2*n;
    int arr1[n],arr2[n],arrF[x];
     printf("Enter array 1: \n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&arr1[i]);
    }
    printf("Enter array 2: \n");

    for(i=0;i<n;i++)
     {
        scanf("%d",&arr2[i]);
     }

    mergeArr(arr1,arr2,n);



    return 0;

}

int mergeArr(int arr1[],int arr2[],int n)
{   int x=2*n,i,temp,j;
    int arrF[x];
    for(i=0;i<n;i++)
        arrF[i]=arr1[i];
    for(i=0;i<n;i++)
        arrF[n+i]=arr2[i];
    //for(i=0;i<x;i++)
   // printf("%d ",arrF[i]);

   for(i=0;i<x;i++)
   {
       for(j=0;i<x;j++)
       {
       if(arrF[i]<arrF[j])
            {
                    temp=arrF[i];
                    arrF[i]=arrF[j];
                    arrF[j]=temp;
            }

       }
   }

   for(i=0;i<x;i++)
    printf("%d ",arrF[i]);


}








