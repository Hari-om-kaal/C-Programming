#include<stdio.h>
void largest(){
    //int x=10,y=2;
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("largest = %d",x,y);
    }
    else{
        printf("largest = %d",y,x);
    }
}
int main(){
    largest();

    return 0;
}