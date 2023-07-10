#include<stdio.h>

void quicksort(int x[],int first,int last)
{
    int temp,pivot,i,j;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(x[i]<=x[pivot]&&i<last)
                i++;
            while(x[j]>x[pivot])
                j--;
            if(i<j)
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
        quicksort(x,first,j-1);
        quicksort(x,j+1,last);
    }
}
int main()
{
    int a[20],i,n;
    printf("enter the size\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("enter the elements\n");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        quicksort(a,0,n-1);
        printf("the sorted elements are \n");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
    }
    else
        printf("the size should be greater than zero\n");
    return 0;
}
