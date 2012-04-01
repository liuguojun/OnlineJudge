#include<iostream>
using namespace std;
int main()
{
	char str[101];
	int a[101]={0},i,j;
	while(cin>>str)
	{
		if(strcmp(str,"0")==0)
			break;
		int m;
		m=strlen(str);
		j=100;
		for(i=m-1;i>=0;i--)
		{
			a[j]+=str[i]-'0';
			j--;
		}
	}
	for(i=100;i>0;i--)
	{
		
		a[i-1]+=a[i]/10;
a[i]=a[i]%10;
	}
	for(i=0;i<101;i++)
		if(a[i]!=0)break;
		for(j=i;j<101;j++)
			cout<<a[j];
		cout<<endl;
		return 0;
}


