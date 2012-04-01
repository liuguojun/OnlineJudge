#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int k1,k2,k3;
	while(cin>>k1>>k2>>k3)
	{
		if(k1==0&&k2==0&&k3==0)break;
		char str[200];
		cin>>str;
		int m=strlen(str);
		char ch[3][230];
		int n1=0,n2=0,n3=0,position[3][200],i,j;
		for(i=0;str[i]!=0;i++)
		{
			if(str[i]>='a'&&str[i]<='i')
			{
				ch[0][n1]=str[i];
				position[0][n1]=i;
				n1++;
			}
			else if(str[i]>='j'&&str[i]<='r')
			{
				ch[1][n2]=str[i];
				position[1][n2]=i;
				n2++;
			}
			else 	
			{
				ch[2][n3]=str[i];
				position[2][n3]=i;
				n3++;
			}
		}
		if(n1!=0)
		{
		k1=k1%n1;
		for(i=n1-1;i>=0;i--)
			ch[0][i+k1]=ch[0][i];
		for(i=n1-1+k1;i>=n1;i--)
			ch[0][i-n1]=ch[0][i];
		}
		if(n2!=0)
		{
		k2=k2%n2;
		for(i=n2-1;i>=0;i--)
			ch[1][i+k2]=ch[1][i];
		for(i=n2-1+k2;i>=n2;i--)
			ch[1][i-n2]=ch[1][i];
		}
		
		if(n3!=0)
		{

		k3=k3%n3;
		for(i=n3-1;i>=0;i--)
			ch[2][i+k3]=ch[2][i];
		for(i=n3-1+k3;i>=n3;i--)
			ch[2][i-n3]=ch[2][i];
		}

		for(i=0;i<m;i++)
		{
			for(j=0;j<n1;j++)
				if(position[0][j]==i)
					cout<<ch[0][j];
				for(j=0;j<n2;j++)
					if(position[1][j]==i)
						cout<<ch[1][j];
					for(j=0;j<n3;j++)
						if(position[2][j]==i)
							cout<<ch[2][j];
		}
		cout<<endl;
	}
	return 0;
}

