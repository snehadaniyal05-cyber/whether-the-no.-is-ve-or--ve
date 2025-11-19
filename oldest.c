#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter age of three persons: ");
    scanf("%d%d %d",&a,&b,&c);
    if(a>b && a>c)
        printf("the oldest is: %d",a);
    else if(b>a && b>c)
        printf("the oldest is: %d",b);
    else if(c>a && c>b)
        printf("the oldest is: %d",c);
    else
        printf("all are of same age");
    return 0;
}