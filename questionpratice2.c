#include <stdio.h>
int main() {
    int height = 5;
    for (int i = 1; i <= height; i++) {
        for (int j = height - i + 1; j <= height; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}