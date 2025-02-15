#include <stdio.h>
int main(){
    int a;
    if ((a > 18) || (a == 18)){
        printf("Eligible");
    }
    else if(a < 18){
        printf("Not Eligible");
    } 
    return 0;
} 