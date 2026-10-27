// LOOP KA USE KRE KE HUM KISI BHI CHIJ KO REPET KRWA SKTE HAI
// Star DO While  loop
#include <stdio.h>
int main()
{
    int num, index = 0;
    printf("Enter the number of num\n");
    scanf("%d",&num);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < num);

    return 0;
}