#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    printf("%d", __builtin_ctz(num) + 1);
    return 0;
}