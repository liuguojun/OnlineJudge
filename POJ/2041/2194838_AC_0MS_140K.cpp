#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		char str1[10],str2[30],sub[30],d;
		int i,j,c,k;
		cin>>str1>>str2;
		for(j=strlen(str1)-1;j>=0;j--)
		{
			c=strlen(str2);
			if(str1[j]=='J')
			{
				for(i=c-1;i>=0;i--)
					str2[i+1]=str2[i];
				str2[0]=str2[c];
				str2[c]=0;
				
			}
			
			if(str1[j]=='C')
			{
				d=str2[0];
				for(i=1;str2[i]!=0;i++)
					str2[i-1]=str2[i];
				str2[c-1]=d;
				str2[c]=0;
			}
			if(str1[j]=='E')
			{
				if(c%2==0)
				{
					for(i=c/2;str2[i]!=0;i++)
						sub[i-c/2]=str2[i];
					for(i=0;i<c/2;i++)
						sub[c/2+i]=str2[i];
					sub[c/2+i]=0;
					strcpy(str2,sub);
				}
				else 
				{
					for(i=c/2+1;str2[i]!=0;i++)
						sub[i-c/2-1]=str2[i];
					sub[c/2]=str2[c/2];
					for(i=0;i<c/2;i++)
						sub[i+1+c/2]=str2[i];
					sub[i+1+c/2]=0;
					strcpy(str2,sub);
					
				}
												
			}
			
			if(str1[j]=='A')
				strrev(str2);
			if(str1[j]=='P')
			{
				for(i=0;str2[i]!=0;i++)
					if(str2[i]>='0'&&str2[i]<='9')
					{
						if(str2[i]=='0')str2[i]='9';
						else	str2[i]=(str2[i]-'0'-1)%10+'0';
					}
					
			}
			
			if(str1[j]=='M')
			{
				for(i=0;str2[i]!=0;i++)
					if(str2[i]>='0'&&str2[i]<='9')
						str2[i]=(str2[i]-'0'+1)%10+'0';
					
			}
			
		}
		cout<<str2<<endl;
	}
	return 0;
}




