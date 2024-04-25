#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    if ((a<=b) && (abs(a)<=100) && (abs(b)<=100))
    {
        for (int i=a; i<=b; i++)
        {
            printf("%d ",i*i);
        }
    }
    return 0;
}

