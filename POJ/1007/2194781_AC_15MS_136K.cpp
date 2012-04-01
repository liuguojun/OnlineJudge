#include<iostream>
using namespace std;
int main()
{
	struct ch
	{
		char str[51];
		int m;
	}
	ch[100],temp;
	int l,n,i,j,k;
	cin>>l>>n;
for(i=0;i<n;i++)
{
ch[i].m=0;
cin>>ch[i].str;
}
	for(i=0;i<n;i++)
	{
     
		for(j=0;j<l;j++)
		{
			for(k=j+1;k<l;k++)
				if(ch[i].str[j]>ch[i].str[k])
					ch[i].m++;
		}
	}
				for(i=0;i<n-1;i++)
					for(j=0;j<n-1-i;j++)
						if(ch[j].m>ch[j+1].m)
						{
							temp=ch[j];
							ch[j]=ch[j+1];
							ch[j+1]=temp;
						}

	for(i=0;i<n;i++)
		cout<<ch[i].str<<endl;
	return 0;
}
