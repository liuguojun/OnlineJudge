#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int s[25][25][25];
int w(int a,int b,int c)
{
	int a1=0,a2=0,a3=0;
	
	if(a<=0||b<=0||c<=0)
	{
		a1=1;
		return 1;
	}
	
	if(a1==0)
	{
		if(a>20||b>20||c>20)
		{
			if(s[20][20][20]==0)
				s[20][20][20]=w(20,20,20);
			a2=1;
			return s[20][20][20];
		}
	}
	
	if(a1==0&&a2==0)
	{
		if(a<b&&b<c)
		{
			if(s[a][b][c-1]==0)	
				s[a][b][c-1]=w(a,b,c-1);
			
			if(s[a][b-1][c-1]==0)
				s[a][b-1][c-1]=w(a,b-1,c-1);
			
			if(s[a][b-1][c]==0)
				s[a][b-1][c]=w(a,b-1,c);
			a3=1;
			return s[a][b][c-1]+s[a][b-1][c-1]-s[a][b-1][c];
		}
	}
	
	
	if(a1==0&&a2==0&&a3==0)
	{
		if(s[a-1][b][c]==0)	
			s[a-1][b][c]=w(a-1,b,c);
		if(s[a-1][b-1][c]==0)	
			s[a-1][b-1][c]=w(a-1,b-1,c);
		
		if(s[a-1][b][c-1]==0)	
			s[a-1][b][c-1]=w(a-1,b,c-1);
		if(s[a-1][b-1][c-1]==0)	
			s[a-1][b-1][c-1]=w(a-1,b-1,c-1);
		return s[a-1][b][c]+s[a-1][b-1][c]+s[a-1][b][c-1]-s[a-1][b-1][c-1];
	}
}

int main()
{
	memset(s,0,sizeof(int));
	int a,b,c;
	
	
	while(cin>>a>>b>>c)
	{
		if(a==-1&&b==-1&&c==-1)break;
		cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
	}
	return 0;
}

