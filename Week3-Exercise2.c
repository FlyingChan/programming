#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The quotient of %d/%d is %d and the remainder of %d/%d is %d.",a,b,a/b,a,b,a%b);
}