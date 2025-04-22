#include <stdio.h>

int main(){
    int num1,num2,oc;
    scanf("%d %c %d",&num1,&oc,&num2);
    switch(oc){
        case 42: printf("%d*%d=%d",num1,num2,num1*num2); break;
        case 43: printf("%d+%d=%d",num1,num2,num1+num2); break;
        case 45: printf("%d-%d=%d",num1,num2,num1-num2); break;
        case 47: printf("%d/%d=%d",num1,num2,num1/num2); break;
    }
}