#include<iostream>
using namespace std;
int main()
{
	char str1[101],str2[101];
	cin>>str1>>str2;
	int i,j,m,flag=0,a[100]={0},b[100]={0};
	
	for(i=0;str1[i]!=0;i++)
		a[str1[i]-'A']++;
	for(i=0;str2[i]!=0;i++)
		b[str2[i]-'A']++;
	for(i=0;i<99;i++)
		for(j=0;j<99-i;j++)
			if(a[j]<a[j+1])
			{
				m=a[j];a[j]=a[j+1];a[j+1]=m;
			}
			for(i=0;i<99;i++)
				for(j=0;j<99-i;j++)
					if(b[j]<b[j+1])
					{
						m=b[j];b[j]=b[j+1];b[j+1]=m;
					}
					for(i=0;i<100;i++)
					{
						if(a[i]!=b[i])flag=1;
					}
						if(flag==0)cout<<"YES"<<endl;
						else cout<<"NO"<<endl;
						return 0;
}
							
							
							
							
							

