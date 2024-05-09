
#include <stdio.h>
#define SIZE 10

int input (int len, int arr[])
{
int i;
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

void pos_max_pos_min (int len, int arr[])
{
    int min = arr[0];
    int max = arr[len-1];
    int pos_min = 1;
    int pos_max = len;
    for (int i = 1; i < len; i++)
    {
        if (min > arr [i])
        {
        min = arr [i];
        pos_min = ++i;
        }
    }
    for (int i = len-1;i >=0; i--)
    {
        if (max < arr [i])
        {
        max = arr [i];
        pos_max = ++i;
        }
    }
    printf("%d %d %d %d", pos_max, max, pos_min, min);
}

int main(int argc, char **argv)
{
    int arr[SIZE];
    input (SIZE, arr);
    pos_max_pos_min(SIZE, arr);

    return 0;
}
