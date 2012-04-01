#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;char str[210];
	while(cin>>n)
	{
		if(n==0)break;
		cin>>str;
		int i,j,len,k=0;
		char ch[100][201];
			len=strlen(str);len=len/n;
		for(i=0;i<len;i++)
		{
			for(j=0;j<n;j++)
			{
				ch[i][j]=str[k];
				k++;
			}
			ch[i][j]=0;
		}
			for(i=0;i<len;i++)
			if(i%2==1)
					strrev(ch[i]);
			
			for(i=0;i<n;i++)
				for(j=0;j<len;j++)
					cout<<ch[j][i];
				cout<<endl;			
	}
	return 0;
}
			
