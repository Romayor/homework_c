
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

void sum_max (int len, int arr[])
{
    int max1 = arr[len-1];
    int max2 = arr[0];

    for (int i = len-1;i >=0; i--)
    {
        if (max1 < arr [i])
        {
        max1 = arr [i];
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (max2 < arr [i]&& arr[i]<max1)
        {
        max2 = arr [i];
        }
    }
    printf("%d",  max1+max2);
}


int main(int argc, char **argv)
{
    int arr[SIZE];
    input (SIZE, arr);
    sum_max(SIZE, arr);

    return 0;
}
