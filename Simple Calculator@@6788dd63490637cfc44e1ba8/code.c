#include <stdio.h>
int main(){
    int a, b, sum, diff, mul, div;
    char ch;
    scanf("%d %d %ch", &a, &b, &ch);
    sum = a + b;
    diff = a - b;
    mul = a * b;
    div = a / b;
    if(ch == "+")
        printf("%d", sum);
    else if(ch == "-")
        printf("%d", diff);
    else if(ch == "*")
        printf("%d", mul);
    else if(ch == "/")
        printf("%d", div);
    else
        printf("error");
    return 0;
}