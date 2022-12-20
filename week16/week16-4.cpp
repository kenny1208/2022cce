#include <stdio.h>

int main()
{
	int n,j=0;
	scanf("%d",&n);
	int f[n];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<n+2;i++)
	{

		f[i]=f[i-1]+f[i-2];


	}
	for(int i=0;i<n;i+=3)
	{
		printf("%d ",f[i]);
	}

}
