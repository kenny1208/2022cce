#include <stdio.h>

int main()
{
    int n;
    printf("�п�J�褸�~��");
    scanf("%d",&n);
    if(n%400==0) printf("�|�~");
    else if(n%100==0) printf("���~");
    else if(n%4==0) printf("�|�~");
    else printf("���~");
}
