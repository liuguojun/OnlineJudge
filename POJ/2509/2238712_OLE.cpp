#include<stdio.h>

int main()
{
int m,n;
while(scanf("%d%d",&m,&n))
{
	int sum=0,i=0;

	while(m>=n)
	{
		sum+=n;
		i+=n;
		m=m+i/3-n;
		i=i%n;
	}
	if(m<n)sum+=m;
	printf("%d\n",sum);
}
return 0;
}
