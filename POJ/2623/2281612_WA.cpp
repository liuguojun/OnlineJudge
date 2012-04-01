#include<stdio.h>
#include<iostream>
int fun(const void*p,const void*q)
{
	return *((int*)p)-*((int*)q);
}
void main()
{
	int n,a[100000],i;
	for(i=1;i<=n;i++)
		scanf("%d",a[i]);
	qsort(a+1,n,sizeof(int),fun);
	if(n%2==0)printf("%d\n",(a[n/2]+a[n/2+1])/2.0);
	else printf("%d\n",a[n/2+1]);
}
