#include<stdio.h>
int main()
{
  float f,c;
  printf("the temperature in fahrenheit:");
  scanf("%f",&f);
  c=5/9.0*(f-32);
  printf("the temperature in celcius is %f\n",c);
  return 0;
}