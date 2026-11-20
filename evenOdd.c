#include<stdio.h>
void number(){
  // int x=4;
  int x;
  scanf("%d",&x);
if(x%2==0){
    printf("even");
}
else{
    printf("odd");
}
}
int main(){
    number();
    return 0;
}