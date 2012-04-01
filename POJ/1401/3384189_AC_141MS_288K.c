#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m;
		scanf("%d",&m);		

		int j,k=0;
		j=5;
		while(j<=m)
		{
			k+=m/j;
			j=j*5;
		}
		
		printf("%d\n",k);
	}
return 0;
}