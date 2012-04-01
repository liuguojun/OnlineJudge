#include<iostream>
#include<cstring>
using namespace std;
void main(){int a[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
	char str[30];while(cin>>str)
	{int i,b[30];for(i=0;str[i]!=0;i++)b[i]=a[str[i]-'A'];
		i=0;int flag=0;while(i<strlen(str)){if(b[i]>0)	{if(flag==0)cout<<b[i];	if(b[i]==b[i+1])flag=1;
			else flag=0;i++;}else i++;}	cout<<endl;}}

