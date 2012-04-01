#include<iostream>
using namespace std;
int main()
{
	char str[11];
	cin>>str;
	int i,j,a,num=0,flag=0;
	for(i=0;i<10;i++)
		if(str[i]=='?')break;
		a=10-i;
		for(i=9;i>=0;i--)
		{
			if(str[i]=='X')
				num+=10*(10-i);
			if(str[i]>='0'&&str[i]<='9')
				num+=(str[i]-'0')*(10-i);
		}
		for(j=0;j<10;j++)
			if((num+j*a)%11==0)
			{
				flag=1;
				cout<<j<<endl;
			}
			if(flag==0)cout<<"-1"<<endl;

return 0;
}


