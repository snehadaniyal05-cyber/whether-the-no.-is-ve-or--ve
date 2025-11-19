#include<stdio.h>
int main()
{
    int n,temp,rem,digits = 0;
    printf("Enter a number: ");
    scanf("%d",&n); 
    temp = n;

    while(temp != 0){
        temp /= 10;
        digits++;
    }
    temp = n;
    while(temp != 0){
        rem = temp%10;
        sum += pow(rem, digits);
        temp/=10;
    }
    if((int)sum == n)
     printf("armstrong number");
    else 
     printf("not an armstrong number");
return 0;
}