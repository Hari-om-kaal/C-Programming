

#include<stdio.h>
int main(){
    int a[5];
    int i ,sum=0;
    for(i=0; i<=4; i++){
       scanf("%d",&a[i]);
       sum=sum+a[i];
    }
    for(i=0; i<=4; i++){
        printf("%d\n",a[i]);
       // printf("+");
    }
    printf("Sum=%d",sum);
    return 0;
}