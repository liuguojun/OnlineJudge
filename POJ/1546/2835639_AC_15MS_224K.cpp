#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
void main()
{
	char str[20];int m,n;
	while(cin>>str>>m>>n)
	{int i,j=0;char ch[40];
		for(i=0;str[i]!=0;i++)
		{if(str[i]>='0'&&str[i]<='9')j=j*m+str[i]-'0';
			else j=j*m+str[i]-'A'+10;}
itoa(j,ch,n);
if(strlen(ch)<=7)cout<<setw(7)<<strupr(ch)<<endl;
else cout<<setw(7)<<"ERROR"<<endl;
	}	
}
