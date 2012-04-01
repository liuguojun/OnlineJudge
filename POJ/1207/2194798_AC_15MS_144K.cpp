#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,i,max=0,temp,k;
	while(cin>>a>>b)
	{int flag=0;
		if(a>b)
	{c=a;a=b;b=c;flag=1;}
		
		
		
		
		max=1;
		for(i=a;i<=b;i=i+1)
		{
			k=i;
			temp=1;
			if(k==1)temp=1;
			else
			{
				while(k!=1)
				{
					if(k%2!=0)
					{
						k=3*k+1;
						temp++;
					}
					else 
					{
						k=k/2;
						temp++;
					}
				}
				if(max<temp)
					max=temp;
			}
		}
	if(flag==0)	cout<<a<<" "<<b<<" "<<max<<endl;
	else cout<<b<<" "<<a<<" "<<max<<endl;
	}
	return 0;
}




