#include <stdio.h>
int main()
{

    int a[2][2];
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("sum = %d\n", sum);

    return 0;
}