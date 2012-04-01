#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	t=n;
	while(n--)
	{
		
		char str1[1005],str2[1005];
		int a[15]={0},i,j;
		cin>>str1>>str2;
		strrev(str1);
		strrev(str2);
		for(i=0;str1[i]!=0;i++)
			a[i]+=str1[i]-'0';
		for(i=0;str2[i]!=0;i++)
		{
			a[i]+=str2[i]-'0';
		}
		for(i=0;i<1005;i++)
			if(a[i]>1)
			{
				a[i+1]+=a[i]/2;
				a[i]=a[i]%2;
			}
		
		for(j=1004;j>=0;j--)
			if(a[j]!=0)break;

cout<<t-n<<" ";

if(j==-1)cout<<"0";
			else
			{
				for(i=j;i>=0;i--)
				cout<<a[i];
			}
			
			cout<<endl;
	}
	return 0;
}


