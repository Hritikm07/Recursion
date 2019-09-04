#include<stdio.h>
int f(int c);
int main()
{
  int c;
  printf("Enter the number n:");
  scanf("%d", &c);
  printf("The sum of %d number is %d.", c, f(c));
  
}
int f(int c)
{
   if(c!=0)
   return (c+f(c-1));
   else 
   return c;
}
