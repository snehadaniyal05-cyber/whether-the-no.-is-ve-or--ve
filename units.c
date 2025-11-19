#include<stdio.h>
int main()
{
    float units , bills;
    printf("Enter total units consumed: ");
    scanf("%d",&units);
    if(units<=100)
        bills=units*1.5;
    else if(units<= 200 )
        bills= (100*1.5) + (units-100)*2.00;
    else if(units<=300)
        bills= (100*1.5) + (100*2.00) + (units-200)*3.00;
    else
        bills= (100*1.5) + (100*2.00) + (100*3.00) + (units-300)*5.00;
    printf("Total electricity bill is: %.2f",bills);
    return 0;
}