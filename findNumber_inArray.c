#include<stdio.h>
int main(){
    int arr[5];
    int i ,n,found=0;
    for ( i = 0; i <=4; i++)
    {
       
        scanf("%d",&arr[i]);
     
    }
     printf("Enter target number");
     scanf("%d",&n);
     for ( i = 0; i <=4; i++)
     {
        if (arr[i]==n)
        {
            //printf("number found");
            found=1;
           /// break;
        }
     }
     if (found==0)
     {
        printf("Number not found");
     }
     else{
        printf("number found");
     }
     
     
    
    return 0;
}