#include<iostream>
using namespace std;
struct wall{
	int left;
	int right;
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		wall s[105];
		int n,k,i,j,a,b,c[105]={0},max=0,pos=0,count=0;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>s[i].left>>a>>s[i].right>>b;
			
			for(j=s[i].left;j<=s[i].right;j++)
				c[j]++;
		}
		wall temp;
		for(i=0;i<n-1;i++)
			for(j=0;j<n-1-i;j++)
			{
				if(s[j].left>s[j+1].left)
				{
					temp=s[j];s[j]=s[j+1];s[j+1]=temp;
				}
			}

		for(i=0;i<100;i++)
		{
			while(c[i]>k)
			{
				max=0;
				for(j=0;j<n;j++)
				{
					if(i<=s[j].right&&i>=s[j].left)
					{
						if(max<s[j].right)
						{
							max=s[j].right;
							pos=j;
						}
					}
				}
				c[i]--;
				for(j=s[pos].left;j<=s[pos].right;j++)
					c[j]--;
				s[pos].right=i;
				count++;
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
}




