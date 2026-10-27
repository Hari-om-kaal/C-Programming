#include<stdio.h>
int main(){
    int i = 1, sum = 0;
    do
    {
        
        sum = sum + i;
        i = i+1;
    } while (i <= 6);
    printf("Sum = %d", sum);
    

return 0;
}