#include<iostream>
using namespace std;
int main()
{
	char str1[20000];
	while(cin>>str1)
	{
		char str2[20000];
	cin>>str2;
	int i,j,k=0,a[20000]={0},flag=0;
		for(i=0;str1[i]!=0;i++)
			for(j=k;str2[j]!=0;j++)
			if(str1[i]==str2[j])
				{
				k=j;
				a[i]=1;
				break;
			}
			
		for(j=0;j<i;j++)
			if(a[j]==0)flag=1;
			if(flag==0)	cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
	}
	return 0;
}
