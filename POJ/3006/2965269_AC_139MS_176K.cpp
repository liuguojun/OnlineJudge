#include<iostream>
using namespace std;

bool check(int n)
{
	
	int i;
	int flag=4;
	if(n==1)return 0;
	if(n==2)return 1;
	if(n%2==0)return 0;
	for(i=3;i*i<=n;i+=2)
	{
		if(n%i==0)
			break;
				}
	
	if(i*i>n)		
		return 1;
	else return 0;
}


int main()
{
	
	
	int a,d,n,i;
	//creat_prime(1000000);
	while(cin>>a>>d>>n)
	{
		if(a==0&&d==0&&n==0)break;
		int t=0;
		for(i=0;;i++)
		{
			if(check(a+i*d))t++;
			if(t==n)break;
		}
		cout<<a+i*d<<endl;
	}
	return 0;
}
