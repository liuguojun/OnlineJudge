#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[20];
	cin>>str;
	int i,flag,sum=0,flah=0;
	strrev(str);
	if(str[0]=='?')flag=0;
	else if(str[0]=='X')sum+=10;
	else sum+=str[0]-'0';
	for(i=1;str[i]!=0;i++)
	{
		if(str[i]=='?') flag=i;
		else sum+=(str[i]-'0')*(i+1);
	}
	if(flag==0)
	{
		for(i=0;i<=10;i++)
			if((sum+i*(flag+1))%11==0)
			{flah=1;
			if(i==10)cout<<"X"<<endl;
			else cout<<i<<endl;	break;}
	}
	else {
		for(i=0;i<=9;i++)
			if((sum+i*(flag+1))%11==0)
			{flah=1;cout<<i<<endl;break;}
	}
	if(flah==0)cout<<"-1"<<endl;
	return 0;
}
