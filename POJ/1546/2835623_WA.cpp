#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	char str[20];int m,n;
	while(cin>>str>>m>>n)
	{
		int i,j=0;
		char ch[40];
		for(i=0;str[i]!=0;i++)
		{
			if(str[i]>='0'&&str[i]<='9')
				j=j*m+str[i]-'0';
			else j=j*m+str[i]-'A'+10;
		}
		cout<<setw(7)<<strupr(itoa(j,ch,n))<<endl;
	}
	return 0;
}
