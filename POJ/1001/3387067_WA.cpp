#include<iostream>
#include<cmath>
using namespace std;

int b[200]={0},c[200]={0},d[200];

void fun()
{
	int i,j;
	for(i=0;i<199;i++)
	{c[i]=b[i];
	b[i]=0;
	}
	for(i=0;i<=199;i++)
		for(j=0;j<=199;j++)
			b[i+j]+=c[i]*d[j];
		for(i=0;i<=199;i++)
			if(b[i]>9)
			{
				b[i+1]+=b[i]/10;
				b[i]=b[i]%10;
			}			
			
}

int main()
{
	
	char a[7];
	int n;
	while(cin>>a>>n)
	{
	
		
		int m=0,dot=0,i,j,k;
		for(i=0;a[i]!=0;i++)
			if(a[i]=='.')
				dot=i;
			else m=m*10+a[i]-'0';
			if(dot!=0)
				dot=5-dot;
			//cout<<dot<<m<<endl;
			while(m%10==0)
			{
				m=m/10;
				dot--;
			}
//cout<<dot<<m<<endl;
			for(i=0;i<200;i++)
			{
				b[i]=0;c[i]=0;d[i]=0;
			}
			i=0;
			while(m!=0)
			{
				c[i]=m%10;
			d[i]=c[i];
			b[i]=d[i];
				i++;
				m=m/10;
			}
			if(n!=1)
			{

			for(i=1;i<n;i++)
				fun();
			}
			else 
			{for(i=0;i<200;i++)
			b[i]=c[i];
			}

			dot=dot*n;
			for(i=199;i>=0;i--)
				if(b[i]!=0)break;
				
				if(dot==0)
				{
					for(j=i;j>=0;j--)
						cout<<b[j];
					cout<<endl;
				}
					else
						if(dot<0)
						{
							for(j=i;j>=0;j--)
							cout<<b[j];
						dot=0-dot;
						for(j=dot;j>0;j--)
							cout<<"0";
						cout<<endl;
						}
						else 
						{
                             for(k=0;k<dot;k++)
								if(b[k]!=0)break;
								if(dot>i-k+1)
								{	cout<<"0.";
									for(j=dot-i+k-1;j>0;j--)
									cout<<"0";
                         for(j=i;j>=k;j--)
								cout<<b[j];
								}
								else 
								{

							for(j=i;j>dot-1;j--)
								cout<<b[j];
							cout<<".";
							
								for(j=dot-1;j>=k;j--)
									cout<<b[j];
								}
								cout<<endl;
						}
	}
	return 0;
}
	
	
	
	
	
	
	
