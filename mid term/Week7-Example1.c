#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n1, n2, n3;
    srand(time(NULL));
    n1 = rand(); n2=rand(); n3=rand();
    printf("%d %d %d",n1,n2,n3);
}