#include<stdio.h>
int main()
{
  float dollars,rupees,pounds;
  printf("enter the amount in dollars: ");
  scanf( "%f", &dollars);
  rupees= dollars*48;
  pounds= rupees/70;
  printf("the amount in pounds is %f ",pounds);
  return 0;
}