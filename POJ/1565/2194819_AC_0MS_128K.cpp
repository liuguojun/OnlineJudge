#include<iostream>
using namespace std;
int main()
{
	char str[33];
	while(cin>>str)
	{
		if(strcmp(str,"0")==0)break;
		int i,j=0;
		for(i=0;str[i]!=0;i++)
			j=str[i]-'0'+2*j;
		j=2*j;
			for(i=0;str[i]!=0;i++)
				j=j-str[i]+'0';
			cout<<j<<endl;
	}
	return 0;
}
