#include <stdio.h>
int main(){
    int n;
    char i, j;
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        for(j=0;j<=(i+1);j++){
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}