#include <stdio.h>
int main(){
    int n, i, j, k;
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        for(k=0;j<=(n-i);j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}