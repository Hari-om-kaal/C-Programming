#include<stdio.h>
int main(){
    char name[30];
    printf("Enter your full name ");
  //  scanf("%s",&name);
    fgets(name, sizeof(name), stdin);
    printf("Your name is : %s",name);
    return 0;
}