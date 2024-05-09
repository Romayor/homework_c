
#include <stdio.h>
#define SIZE 5

int input (int len, int arr[])
{
int i;
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}
void average (int len, int arr[])//среднее арифметическое элементов массива
{
    float sum;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    printf("%.3f", sum/len);
}
int main(int argc, char **argv)
{
    int arr[SIZE];
    input (SIZE, arr);
    average(SIZE, arr);
    return 0;
}

