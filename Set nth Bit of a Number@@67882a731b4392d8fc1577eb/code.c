#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d",&a, &b);
    a = (a|(1<<(b-1)))
    printf("%d", a);
    return 0;
}