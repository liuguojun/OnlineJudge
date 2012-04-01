#include<iostream>
using namespace std;

int cmp(const void *p,const void *q)
{
	return *((int*)p)-*((int*)q);
}
int main()
{
	int m,n,t=0;
	while(cin>>m>>n)
	{
		if(m==0&&n==0)break;
		t++;
		int a[2000],b[60]={0};
		int i,j,s=0;
		
		for(i=1;i<=m*n;i++)
			a[i]=1;
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			a[b[i]]=0;
		}
		qsort(b,n,sizeof(b[0]),cmp);
		j=1;
		
		for(i=0;i<n;i++)
		{
			for(j=j;j<=m*n;j++)
				if((j>b[i])&&(a[j]!=0))
				{				
					b[i]=0;
					a[j]=0;
					break;
				}
		}
		
		for(i=0;i<n;i++)
		{
		if(b[i]!=0)
			s++;
		}
		cout<<"Case "<<t<<": "<<s<<endl;
	}
	return 0;
}
