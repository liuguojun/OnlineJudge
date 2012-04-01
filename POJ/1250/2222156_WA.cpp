#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		char str[100];
		int a[26]={0},i,j=0;
		cin>>str;
		for(i=0;str[i]!=0;i++)
		{
			if(n>0)
			{
				if(a[str[i]-'A']!=0)n++;
				else {
					n--;
					a[str[i]-'A']++;
				}
			}
			else if(n==0)
			{
				if(a[str[i]-'A']!=0)
					n++;
				else {
					a[str[i]-'A']=1-a[str[i]-'A'];
					j++;
				}
			}
		}
		if(j==0)cout<<"All customers tanned successfully."<<endl;
		else cout<<j<<" customer(s) walked away."<<endl;
	}
	return 0;
}

