#include <stdio.h>

// User-defined function taking an argument and returning a value
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num = 5; 
    int result = factorial(num); // Function call
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}