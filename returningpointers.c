#include <stdio.h>
int main(){
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int *mid=&a[n/2];
    printf("Middle element: %d\n", *mid);
    return 0;
}


// int* findmid(int arr[], int len) {
//     return &arr[len/2];
// }