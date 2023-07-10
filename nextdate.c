#include<stdio.h>
int main()
{
    int d,m,y,nd,nm,ny,ndays;
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    char flag;

    do{
        printf("enter d,m,y");
        scanf("%d%d%d",&d,&m,&y);
        flag='y';

        if(m>=1&&m<=12)
        {
            ndays=month[m-1];
        }
        else
            ndays=0;

        if(m==2)
        {
            if(y%100==0)
            {
                if(y%400==0)
                    ndays=29;
            }
            else if(y%4==0)
                ndays=29;

            if(ndays>29)
            {
                printf("can't have 29 days in this month");
                return 0;
            }
        }

        if(!(y>=1812&&y<=2023))
        {
            printf("invalid");
            flag='n';
        }
        if(!(d>=1&&d<=31))
        {
            printf("invalid");
            flag='n';
        }
        if(!(m>=1&&m<=12))
        {
            printf("invalid");
            flag='n';
        }
        else if((m==4||m==6||m==9||m==11)&&d>30)
        {
            printf("invalid");
            return 0;
        }
        if(!(y>=1812&&y<=2023)&&!(m>=1&&m<12)&&!(d>=1&&d<=31))
        {
            printf("invalid");
            return 0;
        }
    }while(flag=='n');

nd=d+1;
nm=m;
ny=y;

if(nd>ndays)
{
    nd=1;
    nm++;
}
if(nm>12)
{
    nm=1;
    ny++;
    if(ny>2023)
    {
        printf("invalid");
        return 0;
    }
}

printf("given date is %d %d %d",d,m,y);
printf("next date id %d %d %d",nd,nm,ny);
return 0;
}
