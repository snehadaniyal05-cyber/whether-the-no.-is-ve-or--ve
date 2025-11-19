#include<stdio.h>
int main()
{
    float profit ,loss,CP ,SP;
    printf("Enter cost price and selling price; ");
    scanf("%f %F",&CP,&SP);

    if(CP>SP)
        profit=((SP-CP)/CP)*100;
        printf("LOSS PERCENTAGE: %.2f",loss);
        printf("LOSS!");
    else if(CP<SP)
        loss=((CP-SP)/CP)*100;
        printf("PROFIT PERCENTAGE: %.2f",profit);
        printf("PROFIT!");
    else
        printf("NO PROFIT AND NO LOSS!!!");
    return 0;
}