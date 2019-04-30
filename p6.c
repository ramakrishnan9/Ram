#include<stdio.h>
int main()
 {
  int n;
  printf("Enter the Year:");
  scanf("%d",&n);
  if((n%4==0&&n%100==0&&n%400))
   {
   printf("the year is:%d",n);
   }
  return 0;
  }
