#include <stdio.h>

int main(){
    int num;
    int digit=0;
    scanf("%d",&num);
    do{
        num /= 10;
        digit++;
    }while(num!=0);
    printf("%d",digit);
}