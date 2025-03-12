#include <stdio.h>
int main(){
    int a, b, num;
    scanf("%d %d", &a, &b);
    num = (a>>b);
    if (num & 1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}