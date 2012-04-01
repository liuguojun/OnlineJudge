#include<iostream>
#include<cmath>
#include<stdio.h>
bool check(int n)
{
	int i,j,k;
	k=int(sqrt(n));
	for(i=2;i<=k;i++)
		if(n%i==0)break;
		if(i==k+1)return true;
		else return false;
}
int main()
{
	int n;
	while(scanf("%d",&n))
	{
		if(n==0)break;
		int i,j,sum=0;
		if(check(n-2))sum++;
		for(i=3;i<=n/2;i=i+2)
			if(check(i)&&check(n-i))sum++;
			printf("%d\n",sum);
	}
	return 0;
}