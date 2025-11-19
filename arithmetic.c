#include<stdio.h>
int main()
{ 
    int a,b,ch;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("1.add 2.sub 3.multiply 4.division");
    scanf("%d",&ch);

    switch(ch){
        case 1: printf("Result=%d",a+b);
              break;
        case 2: printf("Result=%d",a-b);
              break;
        case 3: printf("Result=%d",a*b);
              break;
        case 4: printf("Result=%d",a/b);
              break;
        default: printf("INVALID INPUT!!");
    }
    return 0;
}