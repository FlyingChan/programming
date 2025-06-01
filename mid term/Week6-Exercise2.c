#include<stdio.h>

void star(int n){
    for(int i=1;i<=n;i++){printf("*");}
    printf("\n");
    if(n!=0){star(--n);}
}

int main(){
    int num=0;
    scanf("%d",&num);
    star(num);
}