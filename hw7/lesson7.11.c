
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

void print (int len, int arr[])
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap (int arr[],int i, int j)
{
    int tmp = arr[i];
    arr[i]  = arr[j];
    arr[j]  = tmp;

    }
void sorting (int len, int arr[])
{

    for (int i = 0; i < len; i++)
    {
        for (int j = len-1; j > i; j--)
        {
            if (arr[j-1]%10 > arr[j]%10)
            {
               swap ( arr, j-1, j);
            }
        }

    }
}
int main(int argc, char **argv)
{
    int arr[SIZE];
    input (SIZE, arr);
    sorting(SIZE,arr);
    print (SIZE, arr);
    return 0;
}


