#include<stdio.h.>
int main(){
    int i, a[5];
    int max;
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
        max=a[0];

    for ( i = 1; i <5; i++)
    {
        if(a[i]>max){
            max=a[i];
        }

    }
    printf("Largest number =%d",max);
    
    
    return 0;
}