#include <stdio.h>
#include <string.h>

char line[3000];
char line2[3000];

int main()
{
    printf("enter a line(no space)\n");
    scanf("%s",line);

    int n=strlen(line);
    printf("length:%d\n",n);

    strcpy(line2,line);
    printf("line2: %s\n",line2);
}
