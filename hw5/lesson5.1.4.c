// ввести целое число и определить ,верно ли, что в нем ровно три цифры
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, count;
    scanf("%d", &a);
    while (a!=0)
    {
        a=a/10;
        count++;
    }
    if (count==3)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

