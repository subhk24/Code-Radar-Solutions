#include <stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        i = i+(i-1);
    }
    printf("%d", i);
    return 0;
}