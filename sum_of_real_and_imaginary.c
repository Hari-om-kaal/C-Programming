#include<stdio.h>
int main(){
    double a, b, c, d , real, imaginary;
    printf("Enter a");
    scanf("%lf",&a);
     printf("Enter b");
    scanf("%lf",&b);
     printf("Enter c");
    scanf("%lf",&c);
     printf("Enter d");
    scanf("%lf",&d);

    real = a+c;
    imaginary =b+d;
    printf("Sum =%.2lf + %.2lfi\n", real,imaginary);
    return 0;
}