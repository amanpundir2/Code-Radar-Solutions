#include <stdio.h>
int main(){

int num1,num2;
scanf("%d %d", &num1, &num2);
if(num2 !=0 && num2 % num1 == 0){
    printf("Divisible");
}else{
    printf("Not divisible");
}

    return 0;
}