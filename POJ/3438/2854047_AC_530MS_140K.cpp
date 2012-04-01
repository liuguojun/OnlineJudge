#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	while(n--)
	{	int temp=1;
	char str[1005];
	cin>>str;
	int i,j;
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]==str[i+1])
			temp++;
		else {
			cout<<temp<<str[i];
			temp=1;
		}			
	}
	cout<<endl;
	}
	return 0;
}