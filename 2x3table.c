#include<stdio.h>
int main(){
    int a[2][3];
   
    // THIS LOOP  NASTED USE FOR TAKING INPUT
    for (int i = 0; i < 2; i++)
    {

      for (int j = 0; j < 3; j++)
      {
        scanf("%d",&a[i][j]);
       printf("%d\n",a[i][j]);
      } 
      
    }
    // THIS NASTED LOOP USE FOR PRINT      OUTPUT
    for (int i = 0; i < 2; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf(" %d",a[i][j]);
    }
    printf("\n");
    
    }
    
    
    return 0;
}