#include <stdio.h>
int main(){
    int a, b, num;
    num = a & ~(1 << b);
    printf("%d", num);
    return 0;
}