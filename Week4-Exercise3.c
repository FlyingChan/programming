#include <stdio.h>

int main(){
    int num;
    scanf("%c",&num);
    if(num>=48&&num<=57){printf("integer");}
    else if(num>=97&&num<=122){printf("lower");}
    else if(num>=65&&num<=90){printf("higher");}
    else {printf("wrong");}
    
}