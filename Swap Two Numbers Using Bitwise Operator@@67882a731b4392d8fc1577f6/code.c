#include <stdio.h>
void swap (int a, int b){
    if (a != b){
        a = a ^ b;
        b = b ^ a;
        a = a ^ b;
    }
}
int main(){
    int x, y;
    scanf("%d %d", &a, &b);
    swap(&x, &y);
    printf("%d %d", x, y);
    return 0;
}