#include<stdio.h>
int main()
{ 
    char ch;
     printf("enter a character: ");
     scanf("%c",&ch);
      if(ch>='a' && ch<='z')
        printf("The alphabets are lowercase letters");
     else if(ch>='A' && CH<='Z')
        printf("The alphabets are uppercase letters");
    else if(ch>='0' && ch<='9')
        printf("These are digits");
    else
        printf("INVALID INPUT!");

return 0;
}