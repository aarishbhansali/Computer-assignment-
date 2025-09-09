#include<stdio.h>
int main()
{
  float i,p,r,n;
  printf("enter the value of principle amount,rate of interest and time in years is ");
  scanf("%f%f%f",&p,&r,&n);
  i=(p*r*n) /100;
  printf("interest amount is %f\n",i);
  return 0;
}