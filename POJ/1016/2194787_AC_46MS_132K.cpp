#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[85],str1[100],sub[15][100],ch[20];
	int i,j,k,m,a[10];
	while(cin>>str)
	{
		strcpy(str1,str);
		int b=0,c=0,d=0;
		if(str[0]=='-')
			break;
		for(k=0;k<15;k++)
		{
			memset(a,0,sizeof(a));
			for(i=0;str1[i]!=0;i++)
				a[str1[i]-'0']++;
			j=0;
			for(i=0;i<10;i++)
				if(a[i]!=0)
				{
					itoa(a[i],ch,10);
					for(m=0;ch[m]!=0;m++)
						sub[k][j++]=ch[m];
					sub[k][j++]=i+'0';
					
				}
				sub[k][j]=0;
				strcpy(str1,sub[k]);				
		}
		if(strcmp(str,sub[0])==0)
		{
			cout<<str<<" is self-inventorying"<<endl;
			b=1;
		}
		if(b==0)
		{
			for(i=0;i<14;i++)
				if(strcmp(sub[i],sub[i+1])==0)
				{
					cout<<str<<" is self-inventorying after "<<i+1<<" steps"<<endl;
					c=1;
					break;
				}				
		}
		if(b==0&&c==0) 
		{
			for(i=0;i<15;i++)
			{
				for(j=i+1;j<15;j++)
					if(strcmp(sub[i],sub[j])==0)
					{
						cout<<str<<" enters an inventory loop of length "<<j-i<<endl;
						d=1;
						break;						
					}
					if(d==1)break;					
			}
		}
		if(b==0&&c==0&&d==0) cout<<str<<" can not be classified after 15 iterations"<<endl;
	}
	return 0;
}





