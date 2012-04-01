#include<stdio.h>
void main()
{
	int a[101][101],i,j,k,n,c[101],sum,max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a[i][0]=0;
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
			a[i][j]+=a[i][j-1];
		}
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
				c[k]=a[k][j]-a[k][i];
			sum=0;
			for(k=1;k<=n;k++)
			{
				sum+=c[k];
				if(sum<0)sum=0;
				if(sum>max)max=sum;
			}
		}
	printf("%d\n",max);		
}
			
			
			
