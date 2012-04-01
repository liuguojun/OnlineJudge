#include<iostream>
using namespace std;
struct node{
	int l;
	int m;
};
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int l,m,i,j,sum=0,flag=0;
		cin>>l>>m;
		node s[50000];
		char str[100];
		l=l*100;
		for(i=0;i<m;i++)
		{
			cin>>s[i].l>>str;
			if(strcmp(str,"left")==0)s[i].m=0;
			else s[i].m=1;
		}
		i=0;
		while(i<m)
		{
			int x=l;
			if(flag==s[i].m)
			{
				while(x>=s[i].l&&s[i].m==flag)
				{
					x=x-s[i].l;
					i++;
				}
				sum++;
				flag=1-flag;
			}
			else {
				flag=1-flag;
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}






