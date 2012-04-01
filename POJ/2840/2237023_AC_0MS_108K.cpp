#include<iostream>
#include<cstring>
using namespace std;
void main()
{
	int n;
	cin>>n;
	while(n--)
	{char str[100],ch1[100],ch2[100];
	cin>>str;
	int i,j,a,b;
	for(i=0;str[i]!=':';i++)
		ch1[i]=str[i];
	ch1[i]=0;
	for(j=i+1;str[j]!=0;j++)
		ch2[j-i-1]=str[j];
	ch2[j-i-1]=0;
	a=atoi(ch1);
	b=atoi(ch2);
	if(b!=0)cout<<"0"<<endl;
	else 	{if(a==12)cout<<"24"<<endl;
	else
		cout<<(a+12)%24<<endl;
	}
	}
	
}

