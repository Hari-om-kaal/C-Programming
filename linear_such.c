#include<stdio.h>
int main(){
    int a[5] , i,n, c=0;
    for(i=0; i<=4; i++){
        scanf("%d",&a[i]);

    }
    printf("Enter search number");
             scanf("%d",&n);

    for(i=0; i<=4; i++){
       // printf("%d",a[i]);
         if(n==a[i]){
        c = 1;
        break;
     }
    }
   

    if(c==1){
        printf("number found");

    }
    else{
        printf("number not found");
    }

    return 0;
}
