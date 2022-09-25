#include<stdio.h>
int rotateArr(int[],int,int,char);

int main()
{
    int size=0,n,i;
    char d;
    printf("Enter size of array \n");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("Enter number of bits you want to rotate \n");
    scanf("%d",&n);
    fflush(stdin);
    printf("Enter the direction for left 'l' and for right 'r'\n");
    scanf("%c",&d);

    rotateArr(arr,size,n,d);

    for(i=0;i<size;i++)
        printf("%d",arr[i]);

    return 0;

}

int rotateArr(int arr[],int size,int n,char d)
{   int temp[size],i,k=0;

    if(d=='l')
    {
        for(i=n;i<size;i++)
        {

            temp[k]=arr[i];
            k++;
        }

        for(i=0;i<n;i++)
            {
            temp[k]=arr[i];
            k++;
            }
    }

    else if(d=='r')
    {
         for(i=size-n;i<size;i++)
        {

            temp[k]=arr[i];
            k++;
        }

        for(i=0;i<size-n;i++)
           {
            temp[k]=arr[i];
            k++;
           }
    }

   for(i=0;i<size;i++)
       arr[i]=temp[i];


    return arr;


}




