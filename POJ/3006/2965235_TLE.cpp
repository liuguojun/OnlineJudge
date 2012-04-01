#include<iostream>
using namespace std;
int prime[1000001]={0,0,1,1,0,1,0};
void creat_prime(int n)
{
	int flag=2;
	int t=3;
	int i,j;
	for(i=7;i<n;i+=flag)
	{
		flag=6-flag;
		for(j=2;j*j<=i;j++)			
				if(i%j==0)break;			
		
		if(j*j>i)		
			prime[i]=1;		
		
	}
	
}
int main()
{
	
	
	int a,d,n,i;
creat_prime(1000000);
	while(cin>>a>>d>>n)
	{
		if(a==0&&d==0&&n==0)break;
		int t=0;
		for(i=0;;i++)
		{
			if(prime[a+i*d]==1)t++;
			if(t==n)break;
		}
			cout<<a+i*d<<endl;
	}
	return 0;
}
