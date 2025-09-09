#include<stdio.h>
int main()
{
  float grams,kilograms;
  printf("enter the number of kilograms:");
  scanf("%f",&kilograms);
 grams=kilograms*1000;
 printf("the number of grams is %f\n",grams);
 return 0;
 }