#include<iostream>
using namespace std;
int T[1005],Q[1005],n;
int cmp(const void *p, const void *q)
{
	return *((int *)p)-*((int *)q);
}
int fun(int p,int q,int size_t,int size_q )
{
    int sum=0;
	if(p>=size_t)return 0;
	if(q>=size_q)return 0;

	if(T[p]>Q[q])
		sum=200+fun(p+1,q+1,size_t,size_q); 
	else if(T[p]==Q[q])
	{
		int t,m;
		t=fun(p+1,q+1,size_t,size_q);
m=-200+fun(p+1,q,size_t,size_q-1);
		if(t>m)sum=t;
		else sum=m;
	}
	else sum=-200+fun(p+1,q,size_t,size_q-1);
	return sum;
}



int main()
{
	while(cin>>n)
	{
		if(n==0)break;
		int i,j,sum=0;
		for(i=0;i<n;i++)
			cin>>T[i];
		for(i=0;i<n;i++)
			cin>>Q[i];
		qsort(T,n,sizeof(int),cmp);
		qsort(Q,n,sizeof(int),cmp);
		sum=fun(0,0,n,n);
	
			cout<<sum<<endl;
		}
		return 0;
	}
