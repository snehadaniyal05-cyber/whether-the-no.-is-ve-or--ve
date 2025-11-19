#include<stdio.h>
int main()
{ 
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18)
     printf(Eligible to vote);
    else if(age<18)
     printf(not eligible to vote);
    else
     print("invalid input");
    return 0;
}