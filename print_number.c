//JO DIGIT DOGE VHAA TK NUMBER PRINT HOGA
#include<stdio.h>
int main(){
    int  num,i =1;
    printf("Enter the value of num");
    scanf("%d",&num);
    do{
      printf("%d\n", i);
      i = i+1;
    }while(i<=num);
    return 0;
}