#include<stdio.h.>
int main(){
    int i, a[5];
    int min;
    for ( i = 0; i <5; i++)
    {
        scanf("%d",&a[i]);
    }
        min=a[0];

    for ( i = 1; i <5; i++)
    {
        if(a[i]<min){
            min=a[i];
        }

    }
    printf("Largest number =%d",min);
    
    
    return 0;
}