
#include <stdio.h>
#define SIZE 10

int input (int len, int arr[])// функция ввода массива, int arr[] = int* arr[0]
{
int i;
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

void sum_positive (int len, int arr[])
{
    int sum_pos = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr[i]>0)
        {
        sum_pos += arr [i];
        }
    }
    printf("%d",sum_pos);

}

int main(int argc, char **argv)
{
    int arr[SIZE];
    input (SIZE, arr);
    sum_positive(SIZE, arr);

    return 0;
}

