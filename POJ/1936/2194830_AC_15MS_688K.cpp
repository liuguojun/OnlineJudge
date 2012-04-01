#include<iostream>
using namespace std;
int main()
{
	char str1[100001],str2[100001];
	while(cin>>str1>>str2)
	{

		int i,j=0,flag=0,a[100001]={0};
	for(i=0;str1[i]!=0;i++)
	{
		for(j=j;str2[j]!=0;j++)
		{
			if(str2[j]==str1[i])
			{
				flag=1;
				j++;
			break;
			}

		}
		
			if(flag==1)a[i]=0;
			else a[i]=1;
			flag=0;
	}
	int k=0;
	for(i=0;i<strlen(str1);i++)
	{
		
		if(a[i]!=0)
			k=1;
	}
		if(k==1)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
	return 0;
}




