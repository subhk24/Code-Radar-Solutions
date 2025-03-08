#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<=(n-1);i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

i=0; i<=(n-1);i++
j=0