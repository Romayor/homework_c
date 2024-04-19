
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(int argc,char **argv)
{
    int a,b;
    scanf("%d", &a);
    b = a%10;
    b *= (a/10)%10;
    b *= (a/100)%10;
    printf("%d",b);

    return 0;
}

