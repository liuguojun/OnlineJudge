#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[3005]={0},b[3005];
	int i,j,n,flag=0;
	while(cin>>n)
	{memset(a,0,sizeof(a));
flag=0;
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;i<n-1;i++)
			a[abs(b[i+1]-b[i])]=1;
		for(i=1;i<n;i++)
		{
			if(a[i]!=1)flag=1;
			
		}
		
			if(flag==1)cout<<"Not jolly"<<endl;
			else cout<<"Jolly"<<endl;
	}
	return 0;
}



