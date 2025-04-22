#include <stdio.h>

int main(){
    int num;
    int result = 0;
    while(1){
        scanf("%d",&num);
        result += num;
        if(num==0) break;
    }
    printf("%d",result);
}