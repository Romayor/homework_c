// ввести целое число и определить ,верно ли, что в нем ровно три цифры
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, sum;
    scanf("%d", &a);
    while (a!=0)
    {
        sum+=a%10;
        a=a/10;

    }
    printf("%d", sum);

    return 0;
}

