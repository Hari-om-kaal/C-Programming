//  METRES KO CENTI METRES ME CONVERT KRO
#include<stdio.h>
int main(){
    float metres , cm;
    printf("Enter the vale in metres");
    scanf("%f",&metres);
   // printf("Enter the vale in cm");
   // scanf("%f",&cm);
   cm  =metres *100;
   printf("Centimetre = %.2f",cm);

    return 0;
}