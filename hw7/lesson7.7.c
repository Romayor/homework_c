
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
void reverse (int len, int arr[])
{
    int first = 0;
    int middle1 = len/2-1;
    int middle2 = len/2;
    int last = len-1;
    while((first<middle1) && (last>middle2))
    {
        int tmp1 = arr[first];
        arr[first] = arr[middle1];
        arr[middle1] = tmp1;
        first ++;
        middle1 --;
        int tmp2 = arr[middle2];
        arr[middle2] = arr[last];
        arr[last] = tmp2;
        middle2 ++;
        last --;
    }
}


int main(int argc, char **argv)
{
    int arr[SIZE];
    input (SIZE, arr);
    reverse(SIZE, arr);
    print (SIZE, arr);
    return 0;
}

