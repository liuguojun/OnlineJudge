#include<iostream>
using namespace std;
int T[1005],Q[1005];
int cmp(const void *p, const void *q)
{
	return *((int *)p)-*((int *)q);
}
int main()
{
	int n;
	
	while(cin>>n)
	{
		if(n==0)break;
		int i,j,sum,t=0,e=0;
		for(i=0;i<n;i++)
			cin>>T[i];
		for(i=0;i<n;i++)
			cin>>Q[i];
		qsort(T,n,sizeof(int),cmp);
		qsort(Q,n,sizeof(int),cmp);
		i=0;j=0;sum=0;
		while(i<n&&j<n)
		{
			if(T[i]>Q[j])
			{
				t++;
				i++;
				j++;
			}
			else if(T[i]==Q[j])
			{
				e++;
				i++;
				j++;
			}
			else if(T[i]<Q[j])
			{
				i++;
			}
		}
		sum=(t-(n-e-t))*200;
		cout<<sum<<endl;
	}
	return 0;
}
