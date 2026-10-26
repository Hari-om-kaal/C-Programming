#include<stdio.h>
int main(){
    float x1 ,x2 ,x3, mean ,variance , sd;
    printf("Enter x1");
    scanf("%f",&x1);
     printf("Enter x2");
    scanf("%f",&x2);
     printf("Enter x3");
    scanf("%f",&x3);
    mean = (x1+x2+x3)/3;
    printf("mean = %.2f\n",mean);
    variance =((x1-mean)*(x1-mean)+(x2-mean)*(x2-mean)+(x3-mean)*(x3-mean))/3;
    printf("Variance = %.2f\n",variance);
    sd =sqrt(variance);
    printf("Standard Deviation =%.2f",sd);

    return 0;
}