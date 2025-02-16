#include <stdio.h>
int main(){
int a, n;
scanf("%d %d", &a, &n);
if(a & (1<<(n-1))){
    printf("Set");
}
else{
    printf("Not Set");
}

    return 0;
}