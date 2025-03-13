#include <stdio.h>
int main(){
    int n, i, j;
    char a;
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        for(j=0;j<=(n-i);j++){
            printf("%c", a);
        }
        printf("\n");
    }
    return 0;
}