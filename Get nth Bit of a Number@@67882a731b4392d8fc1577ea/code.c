#include <stdio.h>
int main(){
    int a, b, num;
    scanf("%d %d", &a, &b);
    num = (a>>b) & 1;
    printf("%d", num);
    return 0;
}