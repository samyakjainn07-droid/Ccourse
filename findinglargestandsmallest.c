#include <stdio.h>
int main(){
    int a[]={1,2,34,7782,9827,2672, 981, 1234, 5678};
    int len=sizeof(a)/sizeof(a[0]);
    int min, max;
    minMax(a, len, &min, &max);
    printf("Minimum: %d\nMaximum: %d\n", min, max);
    return 0;
}

void minMax(int arr[], int len, int *min, int *max){
    *min=arr[0];
    *max=arr[0];
    for(int i=1; i<len; i++){
        if(arr[i]<*min){
            *min=arr[i];
        }
        if(arr[i]>*max){
            *max=arr[i];
        }
    }
}