
#include <stdio.h>
#define SIZE 12

int input (int len, int arr[])
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
void shift_right_on_4 (int len, int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        shift_right (len, arr);
    }
}

int main(int argc, char **argv)
{
    int arr[SIZE];
    input (SIZE, arr);
    shift_right_on_4(SIZE, arr);
    print (SIZE, arr);
    return 0;
}

