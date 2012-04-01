#include<iostream>
#include<cstring>
using namespace std;
int k;
char str[260];
bool check()
{
	char ch=str[k++];
	if(ch>='p'&&ch<='z')
		return 1;
	if(ch=='N')
		return check();
	if(ch=='C'||ch=='D'||ch=='E'||ch=='I')
		if(check())
			return check();
	return 0;
}
int main()
{	
	while(cin>>str)
	{
		k=0;
		if(check()&&k==strlen(str))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
return 0;
}
