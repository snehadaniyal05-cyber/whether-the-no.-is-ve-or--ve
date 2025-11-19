 #include<stdio.h>
int main()
{
    int num;
     printf("Enter a number : ");
     scanf("%d",&num);
     if(num%3==0 && num%7==0);
       printf("This number is divisible by 3 and 7 both");
    else
       printf("Not divisible by 3 and 7");
    return 0;
}