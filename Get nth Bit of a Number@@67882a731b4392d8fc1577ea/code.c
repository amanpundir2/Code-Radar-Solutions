#include <stdio.h>
int main(){
int a, n;
scanf("%d %d", &a, &n);
int bit =(a >>(n-1)&1);

printf("%d",bit);
    return 0;
}