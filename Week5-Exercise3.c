#include<stdio.h>

int main(){
    int num=0;
    int entries=0;
    scanf("%d",&entries);
    for(int i=1;i<=entries;i++){
        printf("%d\t\t",i);
        scanf("%d",&num);
    }
}