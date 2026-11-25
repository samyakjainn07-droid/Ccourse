#include <stdio.h>
int main() {
    int height = 5;
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
for (int i = 1; i <= height; i++) {      // row by row chalta hai
    
    for (int j = ...; j <= SPACES_COUNT; j++) {
        printf(" ");                      // pehle spaces
    }
    
    for (int j = ...; j <= STARS_COUNT; j++) {
        printf("*");                      // phir stars
    }
    
    printf("\n");                         // row khatam, next line
}*/