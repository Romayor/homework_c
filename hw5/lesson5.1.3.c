// ввести два целых числа a и b (a<=b) и вывести сумму квадратов всех чисел от a до b
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, t, sum;
    scanf("%d%d", &a, &b);
    if ((a<=b) && (abs(a)<=100) && (abs(b)<=100))
    {
        for (int i=a; i<=b; i++)
        {
            t = i*i;
            sum = sum +t;
        }
        printf("%d ", sum);
    }
    return 0;
}

