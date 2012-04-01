#include<iostream>
using namespace std;
int main()
{
	int k;
	while(cin>>k)
	{
		if(k==0) break;
		while(1)
		{
			int m,i,j,max=0,a[3000],flag=0,flag1=0;
			
			for(i=1;i<=k;i++)
			{
				cin>>a[i];
				if(a[1]==0)
				{
					flag1=1;
					break;
				}
			}
			if(flag1==1)break;
			
			for(m=k;m>0;m--)
			{
				max=0;
				for(i=1;i<=m;i++)
					if(max<a[i])
					{
						max=a[i];
						j=i;
					}
					if(j==m)continue;
					else 
					{
						for(i=j+1;i<m;i++)
							if(a[i]<a[i+1])
							{
								flag=1;
								break;
							}
					}
					if(flag==1)break;
					else
					{
						for(i=j;i<m;i++)
							a[i]=a[i+1];
					}
					
			}
			if(flag==0)cout<<"Yes"<<endl;
			else cout<<"No"<<endl;	
		}
		cout<<endl;
	}
	
	return 0;
}

