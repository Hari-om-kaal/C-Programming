#include<stdio.h>
int main(){
    int num , i= 1 ,fact = 1;
    printf("Eneter the number");
    scanf("%d" , &num);
    do
    {
        printf("%d\n", i);
        fact  =  fact * i;
        i = i + 1;
    } while (i<=num);
    printf("Factorial = %d\n", fact);
    
    return 0;
}