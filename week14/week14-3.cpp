#include <stdio.h>

int a=20;

void funcA()
{
    int a=10;
    printf("funcA�̭��L��a:%d\n",a);
}

void funcB()
{
    int a=10;
    printf("funcB�̭��L��a:%d\n",a);
}

int main()
{
    printf("main()�̭��L��a:%d\n",a);
    funcA();
    funcB();
    printf("main()�̭��L��a:%d\n",a);
}
