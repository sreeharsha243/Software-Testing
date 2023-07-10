#include<stdio.h>

int main()
{
    char grade;
    float per;
    printf("enter the percentage\n");
    scanf("%f",&per);
    if(per>89)
        grade='A';
    else if(per>=80&&per<90)
        grade='B';
    else if(per>=70&&per<80)
        grade='C';
    else if(per>=60&&per<70)
        grade='D';
    else
        grade='E';
    switch(grade)
    {
        case 'A':printf("excellent\n");
                 break;
        case 'B':printf("very good\n");
                 break;
        case 'C':printf("good\n");
                 break;
        case 'D':printf("average\n");
                 break;
        case 'E':printf("satisfactory\n");
                 break;
    }
    printf("the percentage =%f and grade is =%c ",per,grade);
    return 0;
}
