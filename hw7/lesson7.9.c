
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

void print (int len, int arr[])
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void shift_right (int len, int arr[])
{
    int last = arr[len -1];
    for (int i = len -1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}


int main(int argc, char **argv)
{
    int arr[SIZE];
    input (SIZE, arr);
    shift_right(SIZE,arr);
    print (SIZE, arr);
    return 0;
}

