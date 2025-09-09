#include <stdio.h>
int main() {
int i, n = 10, value, largest, smallest;
printf("Enter number 1: ");
scanf("%d", &value);
largest = smallest = value;
for(i = 2; i <= n; i++) {
printf("Enter number %d: ", i);
scanf("%d", &value);
if(value > largest) {
largest = value;
}
if(value < smallest) {
smallest = value;
}
}
printf("Largest number = %d\n", largest);
printf("Smallest number = %d\n", smallest);
return 0;
}