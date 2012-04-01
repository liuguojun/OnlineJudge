#include<stdio.h>

int fun(int a)
{
	int sum=0,i=2;	
	
	while(a%2==0)
	{
		sum++;
		a=a/2;
	}
	return sum;
}
int main()
{
	int n,k;
	while(scanf("%d%d",&n,&k))
	{
		int sum1=0,sum2=0,i;
		if(k==0)printf("1\n");
		else{

		if(k<n/2)k=n-k;
		if((n-k+1)%2==1)i=n-k+2;
		else i=n-k+1;
		for(;i<=n;i=i+2)
			sum1+=fun(i);
		
		for(i=2;i<=k;i=i+2)
			sum2+=fun(i);
		if(sum1==sum2)
			printf("1\n");
		else printf("0\n");
		}
	}
	return 0;
}

