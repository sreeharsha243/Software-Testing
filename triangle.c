#include<stdio.h>

main()
{
    int a,b,c,c1,c2,c3;
    char istriangle;
    printf("enter the sides of triangle \n");
    scanf("%d%d%d",&a,&b,&c);
    do{
        c1=a>0&&a<11;
        c2=b>0&&b<11;
        c3=c>0&&c<11;
        if(!c1)
            printf("the value of a should be 10");
        if(!c2)
            printf("the value of b should be 10");
        if(!c3)
            printf("the value of c should be 10");
    }while(!(c1&&c2&&c3));

    if(a<b+c&&b<a+c&&c<a+b)
    {
        istriangle='y';
    }
    else
        istriangle='n';

    if(istriangle=='y')
    {
        if(a==b && b==a && c==a)
        {
            printf("equilateral triangle");
        }
        else if(a!=b && b!=c && a!=c)
        {
            printf("scalene triangle");
        }
        else
            printf("isoceles triangle");
    }
    else
        printf("not a triangle");
}
