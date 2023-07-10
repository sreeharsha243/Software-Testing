#include<stdio.h>

int binsrc(int x[],int low,int high,int key)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x[mid]==key)
            return mid;
        if(x[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main()
{
    int a[20],i,n,key,succ;
    printf("enter the size\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("enter the elements in ascending order\n");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("enter the key to be search\n");
        scanf("%d",&key);
        succ=binsrc(a,0,n-1,key);
        if(succ>=0)
        {
            printf("element found at position %d",succ+1);
        }
        else
            printf("element not found");
    }
    else
        printf("entered element should be greater than ZERO\n");
    return 0;
}
