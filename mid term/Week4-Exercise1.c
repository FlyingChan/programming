#include <stdio.h>

int main(){
    int number;
    float num1, num2;
    printf("1. addition, 2. subtraction, 3. multiplication, 4. division.\n");
    scanf("%d",&number);
    scanf("%f %f",&num1,&num2);
    if(number==1) {printf("result: %f",num1+num2);}
    else if(number==2) {printf("result: %f",num1-num2);}
    else if(number==3) {printf("result: %f",num1*num2);}
    else if(number==4) {printf("result: %f",num1/num2);}

}