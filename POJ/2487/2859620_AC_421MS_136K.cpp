#include<iostream>
using namespace std;
int cmp(const void*p,const void*q)
{
	return *(int*)q-*(int*)p;
}
int main()
{
	int t,n;
	cin>>n;
	t=n;
	while(n--)
	{
		cout<<"Scenario #"<<t-n<<":"<<endl;
		int a[1005],i,j=0,sum=0,need,m;
		cin>>need>>m;
		for(i=0;i<m;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum<need)cout<<"impossible"<<endl;
		else {
			qsort(a,m,sizeof(n),cmp);
		for(i=0;i<m;i++)
		{j+=a[i];
		if(j>=need)break;
		}
		cout<<i+1<<endl;
		}
		cout<<endl;
	}
	return 0;
}

