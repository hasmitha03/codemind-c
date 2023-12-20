#include <stdio.h>

int main() {
    int num;
    int factorial = 1;
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.
");
    } else {
    
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("%d",factorial);
    }

    return 0;
}