#include <stdio.h>
#define SIZE 5

int input (int len, int arr[])// функция ввода массива, int arr[] = int* arr[0]
{
int i;
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}
void print (int len, int arr[])// функция вывода массива, int arr[] = int* arr[0]
{
    for (int i = 0; i < len; i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n");
}

void minimum (int len, int arr[])
{
    int min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (min > arr [i])
        {
        min = arr [i];
        }
    }
    printf("%d",min);
}

int main(int argc, char **argv)
{
    int arr[SIZE];
    input (SIZE, arr);
    minimum (SIZE, arr);

    return 0;
}

