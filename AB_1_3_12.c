#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter how many times you want to print your name: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d. Joe Root\n", i); 
    }
      return 0;
}