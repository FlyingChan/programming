#include<stdio.h>

void multiple(int n);

int main(){
    int num;
    scanf("%d",&num);
    multiple(num);
}

void multiple (int n){
    for(int i=1;i<=9;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
}