#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,R1,R2;
      printf("Enter the value of a,b,c:  ");
      scanf("%f %f %f",&a,&b,&c);
      d=(b*b) - (4*a*c);
    if(d==0){
     printf("roots are real and equal");
    R1= -b/(2*a);
    R2= -b/(2*a);
    printf("R1=%.2f and R2=%.2f",R1,R2);
    }
   else{
          if(d>0){
               printf("roots are equal and different");
               R1= (-b+sqrt(d)/(2*a));
               R2= (-b-sqrt(d)/(2*a));
               printf("R1 AND R2=%.2f",R1,R2);
               }
               else{
                printf("roots are imaginary");
               }
               return 0;
   }


}