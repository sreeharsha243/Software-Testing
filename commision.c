#include<stdio.h>
int main()
{
    int locks,stocks,barrels,tlocks,tstocks,tbarrels;
    float lprice,sprice,bprice,sales,comm;
    int c1,c2,c3;
    lprice=45.0;
    sprice=30.0;
    bprice=25.0;
    tlocks=0;
    tstocks=0;
    tbarrels=0;

    printf("enter the locks and to exit enter -1 for locks");
    scanf("%d",&locks);

    while(locks!=-1)
    {
        printf("enter the stocks and barrels\n");
        scanf("%d%d",&stocks,&barrels);
       do{
        c1=locks>=1&&locks<=70;
        c2=stocks>=1&&stocks<=80;
        c3=barrels>=1&&barrels<=90;

        if(!c1)
        printf("locks not in range");
        if(!c2)
        printf("Stocks not in range");
        if(!c3)
        printf("barrels not in range");

        tlocks=locks+tlocks;
        tstocks=stocks+tstocks;
        tbarrels=barrels+tbarrels;

        printf("enter the locks and to exit enter -1 for locks");
        scanf("%d",&locks);

        if(tlocks<1||tlocks>70||tstocks<1||tstocks>80||tbarrels<1||tbarrels>90)
        {
            printf("terminate the program");
            return 0;
        }
       }while(!(c1&&c2&&c3));
    }

    printf("\n total locks=%d \n total stocks=%d \n total barrels=%d",tlocks,tstocks,tbarrels);
    sales=lprice*tlocks+sprice*tstocks+bprice*tbarrels;
    printf("\n total sales is %f",sales);

    if(sales>0)
    {
        if(sales>1800.0)
        {
            comm=0.10*1000+0.15*8000+0.20*(sales-1800);
        }
        else if(sales>1000.0)
        {
            comm=0.10*1000+0.15*(sales-1000);
        }
        else
          comm=0.10*sales;
          printf("\n commision is %f",comm);
    }
    else
    printf("\n there is no sales");
    return 0;
}
