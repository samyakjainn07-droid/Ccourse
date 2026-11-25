#include <stdio.h>
int main() {
int n = 1;
while (n <= 20) {
int i = 1;
printf("Table of %2d: ", n);
while (i <= 10) {
printf("%d ", n*i);
i++;
}
printf("\n");
n++;
}
return 0;
}