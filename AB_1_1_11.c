#include<stdio.h>
int main()
{
  float grams,kilograms;
  printf("enter the number of grams:");
  scanf("%f",&grams);
 kilograms=grams/1000;
 printf("the number of kilograms is %f\n",kilograms);
 return 0;
 }