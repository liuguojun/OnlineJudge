#include<iostream>
#include<cstring>
using namespace std;

int fun(int a,int b)
{
	char m[20];
	itoa(a,m,10);
	int i,j=0,max=0;
	for(i=0;m[i]!=0;i++)
	{
		if(max<m[i]-'0')
			max=m[i]-'0';
	}
	if(max>=b)return 0;
	else{
		for(i=0;m[i]!=0;i++)
			j=j*b+m[i]-'0';
		return j;
	}
}


int main()
{
	int m,k;cin>>m;
	for(k=0;k<m;k++)
	{
		int a,b,c,i,flag=0;
		cin>>a>>b>>c;
		for(i=2;i<17;i++)
			if(fun(a,i)!=0&&fun(b,i)!=0&&fun(c,i)!=0)
			{
				if(fun(a,i)*fun(b,i)==fun(c,i))
				{
					cout<<i<<endl;
					flag=1;
					break;
				}
			}
			if(flag==0)
			 cout<<"0"<<endl;
				
			
	}
	return 0;
}

