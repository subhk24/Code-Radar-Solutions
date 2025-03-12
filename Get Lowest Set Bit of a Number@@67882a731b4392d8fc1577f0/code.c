#include <stdio.h>
#include <math.h>
int main(){
    int num, a;
    scanf("%d", &num);
    a = log2(num & -num) + 1;
    printf("%d", a);
    return 0;
}