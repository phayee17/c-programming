// program to find even or odd number using a functon
#include <stdio.h>
int main()
{
int x;
printf("Enter value of x");
scanf("%d",&x);
if (x%2==0){
  printf ("x is  divisible by 2");
  }
 else {
   printf("x is not divisible by 2");
 } 
return 0;
  }
int a (int x)
{
  int a;
a=x/2;
return a;
  }