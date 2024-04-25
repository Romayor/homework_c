
// ввести натуральное число, вывести квадраты и кубы всех чисел от 1 до этого числа. Число < 100/

#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a<=100)
    {
        for (int i=1; i<=a; i++)
        {
            printf("%d %d %d\n",i, i*i, i*i*i);
        }
    }
    return 0;
}
