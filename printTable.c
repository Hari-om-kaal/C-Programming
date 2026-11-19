#include<stdio.h>
int main(){
int a[3][3]={{10,20,30} ,{50,60,70} , {11,22,33}};
for(int i = 0; i < 3; i++){
    for (int  j = 0; j < 3; j++)
    {
      //  scanf("%d",&a[i][j]); 
      //  printf("THE VALUE OF %d , %d element of the arrayis %d\n",i,j ,a[i][j]);
      printf("%d ", a[i][j]);
    }
    printf("\n");

    
    
}
    return 0;
}