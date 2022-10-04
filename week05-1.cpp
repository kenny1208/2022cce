#include <stdio.h>

int main()
{
    int a=10;
    if(a==10) printf("a是10\n");
    ///本來if印出一次，現在while變無限次
    while(a==10) printf("a是10\n");
}
