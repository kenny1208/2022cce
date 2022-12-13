#include <stdio.h>

int main()
{
    char line[3000];

    scanf("%s",line);
    printf("How long?\n%s\n",line);
    int count=0;
    for(int i=0;line[i]!=0;i++)
    {
        count++;
    }
    printf("count:%d\n",count);
}
