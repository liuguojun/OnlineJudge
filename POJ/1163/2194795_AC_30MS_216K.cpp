#include<iostream>
using namespace std;
int main()
{
	int a[100][100],b[100][100];
	int i,j,n;
	cin>>n;
		for(i=0;i<n;i++)
			for(j=0;j<=i;j++)
				cin>>a[i][j];
			for(j=0;j<n;j++)
				b[n-1][j]=a[n-1][j];
			for(i=n-2;i>=0;i--)
				for(j=0;j<=i;j++)
					if(b[i+1][j]>b[i+1][j+1])b[i][j]=a[i][j]+b[i+1][j];
					else b[i][j]=a[i][j]+b[i+1][j+1];
					cout<<b[0][0]<<endl;
					return 0;
}


