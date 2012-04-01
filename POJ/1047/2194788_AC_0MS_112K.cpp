#include<iostream>
#include<cstring>
using namespace std;
char sub[65],ch[61];
int a[65];
void fun()
{
	int i,j;
	char str1[61];
	strcpy(str1,ch);
	strrev(str1);
	
	for(i=0;str1[i]!=0;i++)
	{if(a[i]==-1){
		a[i]=0;}
		a[i]=a[i]-'0'+str1[i];

		if(a[i]>9)
		{
			if(a[i+1]==-1)
				a[i+1]=0;
			a[i+1]++;
			a[i]=a[i]-10;
		}
	}
	for(i=0;a[i]!=-1;i++)
		sub[i]=a[i]+'0';
	sub[i]=0;
	strrev(sub);
}


int main()
{
	char str[123];
	while(cin>>ch)
	{
		strcpy(str,ch);
		strcat(str,ch);
		int n,i,flag=0;
		n=strlen(ch);
		for(i=0;i<65;i++)
			a[i]=-1;
		for(i=0;i<n;i++)
		{
			fun();
			if(strstr(str,sub)==NULL)
				flag=1;
		
		}
		if(flag==1)cout<<ch<<" is not cyclic"<<endl;
		else cout<<ch<<" is cyclic"<<endl;
	}
	return 0;
}


