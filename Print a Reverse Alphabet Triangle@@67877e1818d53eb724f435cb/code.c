#include <stdio.h>
int main(){
    int n;
    char i, j;
    for(i=n;i>0;i--){
        for(j=0;j>i;j++){
            printf("%c", 'A'+j);
        }
        printf("\n");
    }
    return 0;
}