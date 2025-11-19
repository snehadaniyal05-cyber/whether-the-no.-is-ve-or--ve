#include<stdio.h>
int main()
{
    int marks;
     printf("Enter your marks(0-100): ");
     scanf("%d",&marks);
if(marks>=90)
  printf("Grade A");
else if(marks>=75)
  printf("Grade B");
else if(marks>=35)
  printf("Grade C");
else
  printf("FAIL!");
return 0;
}