#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[100];
	while(cin>>str)
	{
		if(strcmp(str,"*")==0)break;
			int i,j,k=0,num,flag=0;
			char s[100][3];
		for(i=1;i<=strlen(str);i++)
		{
			num=0;
			for(j=0;j+i<strlen(str);j++)
			{
				s[num][0]=str[j];s[num][1]=str[j+i];
				s[num][2]=0;
				num++;
			}
		
			for(j=0;j<num;j++)
				for(k=j+1;k<num;k++)
				{
					if(k==j)continue;
					if(strcmp(s[j],s[k])==0)
					flag=1;
				}
				if(flag==1)break;
		}
		if(flag==1)cout<<str<<" is NOT surprising."<<endl;
		else cout<<str<<" is surprising."<<endl;
	}
	return 0;
}



