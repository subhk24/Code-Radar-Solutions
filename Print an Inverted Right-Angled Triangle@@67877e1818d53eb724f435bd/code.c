#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<=(n-1);i++){
        for(j=n; j>i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
