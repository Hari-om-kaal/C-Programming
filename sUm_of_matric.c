#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("Enetr 9 elsement");
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("print Matrix A\n");
    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
        
    }
    // FOR MATRIC B 
    printf("print again 9 elsement");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    printf("Matric B\n");
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d\n",b[i][j]);
        }
        printf("\n");
        
    }
    printf("Marix C\n");
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        
    }
     for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          printf(" %d",c[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}