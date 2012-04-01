#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,w,h,j=0,n=0,k,a[100];
		cin>>k;
		char str[100];
		a[0]=0;
		for(i=1;i<=k;i++)
			cin>>a[i];
		for(i=1;i<=k;i++)
		{
			while(n<a[i])
			{
				str[j]='(';
				j++;
				n++;
			}
			str[j++]=')';
		}
		str[j]=0;
		for(i=0;str[i]!=0;i++)
		{
			
			if(str[i]==')')
			{
				h=0;
				for(w=i;w>=0&&str[w]!='(';w--)
				{
					if(str[w]==')')
						h++;
				}
				str[w]='.';
cout<<h<<" ";
			}
			
		}
		
		cout<<endl;
	}
	return 0;
}






