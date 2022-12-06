#include <stdio.h>

int a=20;

void funcA()
{
    int a=10;
    printf("funcA裡面印的a:%d\n",a);
}

void funcB()
{
    int a=10;
    printf("funcB裡面印的a:%d\n",a);
}

int main()
{
    printf("main()裡面印的a:%d\n",a);
    funcA();
    funcB();
    printf("main()裡面印的a:%d\n",a);
}
