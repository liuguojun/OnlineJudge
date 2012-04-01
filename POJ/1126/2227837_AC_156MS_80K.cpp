#include<iostream>
#include<cstring>
using namespace std;
char str[300];

int check(char *str)
{
	char sub[300],ch1[300],ch2[300];
	int i,j,k,flag=0,len;
	strcpy(sub,str);
	len=strlen(sub);
	if(len==1)
	{
		if(sub[0]>='p'&&sub[0]<='z')
			return 1;
		else return 0;
	}
	
	if(sub[0]=='N'&&len>1)
	{
		for(i=1;i<len;i++)
			sub[i-1]=sub[i];
		sub[len-1]=0;
		return check(sub);
	}
	if((sub[0]=='C'||sub[0]=='D'||sub[0]=='E'||sub[0]=='I'))
	{
		if(len>1)
		{
			for(i=1;i<len;i++)
				sub[i-1]=sub[i];
			sub[len-1]=0;
			if(len==2)return 0;
			else {
				
				for(i=1;i<len-1;i++)
				{
					for(j=0;j<i;j++)
						ch1[j]=sub[j];
					ch1[j]=0;
					for(k=j;k<len-1;k++)
						ch2[k-j]=sub[k];
					ch2[k-j]=0;
					if(check(ch1)&&check(ch2))
						flag=1;
				}
			}
		}
		return flag;
	}
	return 0;
}


int main()
{
	
	while(cin>>str)
	{
		
		
		if(check(str))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}



