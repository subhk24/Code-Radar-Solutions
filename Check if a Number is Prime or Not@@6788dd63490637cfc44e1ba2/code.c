#include <stdio.h>
int main(){
    int n, i, a=0;
    scanf("%d", &n);
    for(i=2;i<n;i++){
        if(n%i==0){
            prime = 1;
        }
        if(prime){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}