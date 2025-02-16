#include <stdio.h>
int main(){

int num1,num2;
scanf("%d %d", &num1, &num2);
if( (num1%11==0 && num1 %5==0) ){
    printf("Divisible");
}else{
    printf("Not divisible");
}

    return 0;
}