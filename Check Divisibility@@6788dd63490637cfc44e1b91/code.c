#include <stdio.h>
int main(){

int num1;
scanf(" %d", &num1);
if(num1%11==0 && num1 %5==0 ){
    printf("Divisible");
}else{
    printf("Not divisible");
}

    return 0;
}