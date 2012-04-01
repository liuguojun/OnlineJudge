#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;

int main()
{
	int k;
	cin>>k;
	while(k--)
	{

	int n,m,i,j,a[25];
	cin>>n>>m;

	for(i=0;i<n;i++)
		cin>>a[i];
	
	
		
		
	for(i=1;i<=m;i++)
	{
		next_permutation(&a[0],&a[0]+n);
	}
	for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	
	return 0;
}
