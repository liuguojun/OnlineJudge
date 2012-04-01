#include<iostream>
#include<cmath>
using namespace std;
int a[11000]={0};

void fun(int b)
{
	if(b>10000)return;
	char sub[10];
	int k=0,j;
	itoa(b,sub,10);
	for(j=0;sub[j]!=0;j++)
	k+=sub[j]-'0';
	k+=b;
	a[k]=1;
	 fun(k);
}

int main()
{
	int i;
	for(i=1;i<=9999;i++)
		fun(i);
	for(i=1;i<10000;i++)
		if(a[i]==0)cout<<i<<endl;
		return 0;
}

