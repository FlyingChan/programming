#include <stdio.h>

void star3(int num){
    if(num > 0){
        for(int j=num; j>0; j--){
            printf("*");
        }
        printf("\n");
        star3(num-1);
    }
    return;
}


int main(){
    star3(5);
}
