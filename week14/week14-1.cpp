#include <stdio.h>

int sum(int a,int b);///declare

int main()
{
    int ans=sum(2,3);///call
    printf("%d",ans);
}

int sum(int a,int b)///define sum
{
    return a+b;
}
