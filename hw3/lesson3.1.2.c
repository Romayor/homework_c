
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(int argc,char **argv)
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d+%d+%d=%d\n",a,b,c,a+b+c);
    printf("%d*%d*%d=%d",a,b,c,a*b*c);

    return 0;
}
