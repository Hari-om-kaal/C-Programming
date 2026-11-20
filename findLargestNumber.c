// #include<stdio.h>
// void largest(){
//     //int x=10,y=2;
//     int x,y,z;
//     scanf("%d %d %d",&x,&y,&z);
//     if(x>y && x>z){
//         printf("largest = %d",x,y,z);
//     }
//      else if(y>x && y>z){
//         printf("largest = %d",y,x,z);
//     }
//     else{
//         printf("largest=%d",z,y,x);
//     }
   
// }
// int main(){
//     largest();

//     return 0;
// }


#include<stdio.h>
void max(){
    int a[5],n;
    printf("Enter 5 number");
   
   
    for ( int  i = 0; i <=4; i++)
    {
        scanf("%d", &a[i]);
          
    }
     int max=a[0];
     for (int i = 0; i <=4; i++)
     {
        if (a[i]>max)
        {
            max = a[i];
        }
        
     }
     printf("max=%d",max);
     
   
    
}
int main(){
    max();

    return 0;
}