#include<iostream>
#include<cstring>
using namespace std;
int main()
{	
	int t=0;char ch[20];
	while(cin>>ch)
	{
		int i=0,j,k,flag=0;char str[15][20];
		strcpy(str[i],ch);t++;i++;
		while(cin>>str[i])
		{if(strcmp(str[i],"9")==0)break;
			else i++;}
		for(j=0;j<=i;j++)
			for(k=0;k<=i;k++)
			{	if(k==j)continue;			
					if(strstr(str[k],str[j])==str[k])
					{flag=1;break;}
			}
			if(flag==1)cout<<"Set "<<t<<" is not immediately decodable"<<endl;
			else cout<<"Set "<<t<<" is immediately decodable"<<endl;
	}
	return 0;
}

