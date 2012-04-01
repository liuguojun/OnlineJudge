#include<iostream>
using namespace std;
int compare(const void *p,const void*q)
{int *a,*b;
a=(int*)p;b=(int *)q;
return ((*a)-(*b));
}
int main()
{
	int n,a[10005],i,j,t;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];

	qsort(a,n,sizeof(a[0]),compare);
		cout<<a[(n-1)/2]<<endl;
	
	return 0;
}