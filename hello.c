#include<stdio.h>
int main()
{
   int a=5,b=7;
   printf("value of a : %d \n",a);
   printf("value of b:  %d \n",b);
   a = a+b;
   b = a-b;
   a = a-b;
   printf("swap value : \n");
   printf("value of a %d : \n ",a);
   printf("value of b : %d ",b);
   return 0;
}