#include<stdio.h>
int main()
{
int m,n;
while(EOF!=scanf("%d%d",&m,&m))

{
	int sum=0,i=0;

	while(m>=n)
	{
		sum+=n;
		i+=n;
		m=m+i/n-n;
		i=i%n;
	}
	if(m<n)sum+=m;
	printf("%d\n",sum);
}
return 0;
}
