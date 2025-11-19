#include<stdio.h>
int main()
{
    int n;
    //repeat:
    printf("Enter a number:  ");
    scanf("%d",&n);

    if(n<=0)
     goto repeat;

     printf("You enetered %d",n);
     return 0;
}