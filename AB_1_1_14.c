#include <stdio.h>
int main()
 {
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9/ 5.0) * celsius + 32;
    
    printf("Temperature in Fahrenheit is : %f\n", fahrenheit);

    return 0;
}