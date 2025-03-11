#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        j = i+(i-1);
    }
    printf("%d", j);
    return 0;
}