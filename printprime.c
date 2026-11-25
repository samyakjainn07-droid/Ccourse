#include <stdio.h>  
int main(){
    int i,j,result;
    for(i=1;i<=50;i++){
        result=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                result++;
            }
        }
        if(result==2){
            printf("%d\n",i);
        }
    }
    return 0;
}