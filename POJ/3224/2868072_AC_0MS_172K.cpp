#include<iostream>
using namespace std;
int main()
{
	int n,a[101][101],b[101]={0},i,j,max=0;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==3)b[i]++;
		}
		for(i=0;i<n;i++)
			if(max<b[i])
			{max=b[i];
			j=i;
			}
			cout<<j+1<<endl;
				
	return 0;
}
