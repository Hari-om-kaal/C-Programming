#include<stdio.h>>
int main(){
    int a = 20, b= 30;
    int gcd=1;
    for (int i = 1; i <=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0)
       
        {
             gcd=i;

        }
        
    }
    printf("GCD = %d", gcd);
    return 0;
}