#include<stdio.h>
int main()
{
    int n,rev=0,temp,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;

    while(n !=0){
        r=n%10;
        rev=rev*10+r;
        n /= 10;
    }
    if(rev==temp)
      printf("palindrome number");
    else 
    printf("not a palindrome number");
return 0;
}