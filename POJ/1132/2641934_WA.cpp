#include<iostream>
using namespace std;
int main()
{
	int t,l;
	cin>>t;
	for(l=1;l<=t;l++)
	{
		int x,y,i,j,k;
		char a[33][33];
		char str[100];
		cin>>x>>y>>str;
		i=32-y;j=x;
		memset(a,'.',sizeof(a));
		for(k=0;str[k]!=0;k++)
		{if(str[k]=='.')continue;
			if(str[k]=='E')
			{j++;a[i+1][j]='X';}
			if(str[k]=='N')
			{i--;a[i+1][j+1]='X';}
			if(str[k]=='W')
			{j--;a[i][j+1]='X';}
			if(str[k]=='S')
			{i++;a[i][j]='X';}
		}
		cout<<"Bitmap #"<<l<<endl;
		for(i=1;i<=32;i++)
		{
			for(j=1;j<=32;j++)
				cout<<a[i][j];
			cout<<endl;
		}
	}
	return 0;
}

