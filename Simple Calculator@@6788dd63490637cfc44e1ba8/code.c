#include <stdio.h>
#include <math.h>
int main(){
    int a, b, sum, diff, mul, div;
    char ch;
    scanf("%d %d %c", &a, &b, &ch);
    sum = a + b;
    diff = a - b;
    mul = (float)a * b;
    div = (float)a / b;
    if(ch == '+'){
        printf("%d", sum);
        }
    else if(ch == '-'){
        printf("%d", diff);
    }
    else if(ch == '*'){
        printf("%.2f", mul);
    }
    else if(ch == '/'){
        if((b!=0)&&(a!=0)){
            printf("%.2f", div);
        }
        else{
            printf("error");
        }
    }
    else{
        printf("error");
    }
    return 0;
}