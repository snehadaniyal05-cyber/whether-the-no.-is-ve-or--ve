#include<stdio.h>
#include<math.h>
int main(){
    int n,sqrt;
    printf("Enter a number:");
    scanf("%d",&n);

    sqrt= sqrt(n);
    if(sqrt*sqrt == n)
      printf("perfect square");
    else
      printf("not a perfect square");
    return 0;
}