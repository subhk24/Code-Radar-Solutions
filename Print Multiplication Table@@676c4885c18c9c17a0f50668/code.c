#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        j *= i;
    }
    printf("%d x %d = %d", n, i, j);
    return 0;
}