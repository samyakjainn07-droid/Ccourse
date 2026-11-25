#include <stdio.h>
void printstar(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {

    printstar(5);
    return 0;
}