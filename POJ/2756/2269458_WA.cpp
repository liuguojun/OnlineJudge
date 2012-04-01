#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[20000],str1[20000];
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str>>str1;
		int i,j,a[20000]={0},b[20000]={0};
		if(str[0]=='+')
		{
			for(i=1;i<strlen(str);i++)
				str[i-1]=str[i];
			str[i-1]=0;
		}
		if(str1[0]=='+')
		{
			for(i=1;i<strlen(str1);i++)
				str1[i-1]=str1[i];
			str1[i-1]=0;
		}
		strrev(str);strrev(str1);
		for(i=0;str[i]!=0;i++)
			a[i]=str[i]-'0';
		
		for(i=0;str1[i]!=0;i++)
			b[i]=str1[i]-'0';
		for(i=0;i<20000;i++)
		{a[i]+=b[i];
		if(a[i]>9)
		{
			a[i]-=10;
			a[i+1]+=1;
		}
		}
		for(i=19999;i>=0;i--)
			if(a[i]!=0)break;
			for(j=i;j>=0;j--)
				cout<<a[j];
			cout<<endl;
	}
	
	return 0;
}