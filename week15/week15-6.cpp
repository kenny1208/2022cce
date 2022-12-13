#include <stdio.h>

int main()
{
    char line[3000];

    scanf("%s",line);

    int n=0;
    for(int i=0; ;i++)
    {
        if(line[i]==0) break;
        n++;
    }

    for(int i=n-1;i>=0;i--)
    {
        printf("%c",line[i]);
    }
}
