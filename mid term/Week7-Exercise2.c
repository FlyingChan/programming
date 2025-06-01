#include<stdio.h>

int main(){
    int table[8][9];
    for(int i=0;i<8;i++){
        for(int j=0;j<9;j++){
            table[i][j]=(i+2)*(j+1);
            printf("%-3d",table[i][j]);
        }
    printf("\n");
    }
}