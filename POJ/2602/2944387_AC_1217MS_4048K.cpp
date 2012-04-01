#include<iostream>
#include<stdio.h>
int main()
{
	int a[1000005]={0},i,j,c,b,n;
	//cin>>n;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
	//cin>>c>>b;
scanf("%d%d",&c,&b);
	a[i]=c+b;
	}
	for(i=n-1;i>0;i--)
		if(a[i]>=10)
		{
			a[i]=a[i]-10;
			a[i-1]++;
		}
		for(i=0;i<=n-1;i++)
		printf("%d",a[i]);
				//cout<<a[i];
		printf("\n");	//cout<<endl;
			return 0;
}
