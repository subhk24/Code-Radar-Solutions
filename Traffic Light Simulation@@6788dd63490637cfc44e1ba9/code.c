#include <stdio.h>
int main(){
    char a;
    scanf("%d", &a);
    if(a=='R')
        printf("STOP");
    else if(a=='G')
        printf("Go");
    else if(a=='Y')
        printf("Slow Down");
    else    
        printf("Invalid input");
    return 0;
}