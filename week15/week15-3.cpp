#include <stdio.h>

int main()
{
    printf("A = %d\n",'A');
    printf("B = %d\n",'B');
    printf("C = %d\n",'C');

    for(int c='D';c<='Z';c++)
    {
        printf("%c = %d\n",c,c);
    }
}
