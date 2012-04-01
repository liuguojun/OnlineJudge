#include<iostream>
using namespace std;
char lake[105][105];
void fun(int i,int j)
{
	int fag=0;
	lake[i][j]='.';
	if(lake[i+1][j]=='W')
	{
		fag=1;
		fun(i+1,j);
	}
	
	if(lake[i+1][j+1]=='W')
	{
		fag=1;
		fun(i+1,j+1);
	}
	if(lake[i+1][j-1]=='W')
	{
		fag=1;
		fun(i+1,j-1);
	}
	if(lake[i-1][j]=='W')
	{
		fag=1;
		fun(i-1,j);
	}
	if(lake[i-1][j+1]=='W')
	{
		fag=1;
		fun(i-1,j+1);
	}
	if(lake[i-1][j-1]=='W')
	{
		fag=1;
		fun(i-1,j-1);
	}
	if(lake[i][j+1]=='W')
	{
		fag=1;
		fun(i,j+1);
	}
	if(lake[i][j-1]=='W')
	{
		fag=1;
		fun(i,j-1);
	}
	if(fag==0)return;
}

void main()
{
	int i,j,h,l,sum=0;
	cin>>h>>l;
for(i=0;i<=104;i++)
		for(j=0;j<=104;j++)
			lake[i][j]='.';
	for(i=1;i<=h;i++)
		for(j=1;j<=l;j++)
			cin>>lake[i][j];
		
		for(i=1;i<=h;i++)
			for(j=1;j<=l;j++)
				if(lake[i][j]=='W')
				{
					fun(i,j);
					sum++;
				}
				cout<<sum<<endl;
}
				
