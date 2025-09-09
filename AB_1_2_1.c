//Find out largest and smallest of two values.
#include<stdio.h>
int main()
{
    int a,b;
    printf("largest and smallest number\n");
    printf("enter the number a:");
    scanf("%d",&a);
    printf("enter the number b:");
    scanf("%d",&b);
    if(a>b){
        printf("%d is the largest and %d is the smallest",a,b);
    }
    else if (a==b){
        printf ("both are equal ");
    }
    else {
        printf("%d is the largest and %d is the smallest ",b,a);
    }
    
    return 0;
}
