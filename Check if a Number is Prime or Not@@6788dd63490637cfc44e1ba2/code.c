#include <stdio.h>
int main(){
    int n, i, a=0;
    scanf("%d", &n);
    for(i=2;i<n;i++){
        if(n%i==0){
            a = 1;
        }
    }
        if(a){
            printf("Not Prime");
            break;
        }
        else{
            printf("Prime");
            break;
        }
    return 0;
}