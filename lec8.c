#include <stdio.h>

int main() {

    int number;
    printf("Enter a number(999 to stop): ");
    scanf("%d", &number);
    while(number!=999){
        printf("You entered: %d\n", number);
        scanf("%d", &number);
    }
    printf("You entered 999, exiting the program\n");
    return 0;
}
