#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		char str[20];
		cin>>str;
		int a[20],b[100]={0},i,j,k,m=1,t,h=0;;
		a[0]=0;b[0]=0;
		k=strlen(str);
		for(i=0;str[i]!=0;i++)
		{
			if(str[i]>='a'&&str[i]<='z')
			{
				a[i+1]=(str[i]-'a')*2+2;
				b[(str[i]-'a')*2+2]++;
			}
			else {
				a[i+1]=(str[i]-'A')*2+1;
				b[(str[i]-'A')*2+1]++;
			}
		}
for(i=1;i<=k;i++)
				m=m*i;
		for(i=0;i<100;i++)
			if(b[i]>1){
				h=1;
				for(j=1;j<=b[i];j++)
					h=h*j;
				m=m/h;
			}
			
		for(i=0;i<k;i++)
			for(j=0;j<k-i;j++)
			{
				if(a[j]>a[j+1])
				{
					t=a[j];a[j]=a[j+1];a[j+1]=t;
				}
			}
		
			for(i=1;i<=k;i++)
			{ 
				if(a[i]%2==0)
					
					cout<<char((a[i]-2)/2+'a');
				else 
					cout<<char((a[i]-1)/2+'A');
				
			}
			cout<<endl;
			
			while(m>1)
			{
				
				int l=100000,flag=0,temp,flag1=0;
				
				for(i=k;i>1;i--)
					if(a[i-1]<a[i])
					{
						flag=1;
						t=i-1;
						break;				
					}
					
					if(flag==0)
					{
						for(i=1;i<=k;i++)
							a[i]=i;				
					}
					else 
					{
						for(i=t;i<=k;i++)
						{
							if(a[i]>a[t]&&l>a[i])
							{
								l=a[i];
								j=i;
								flag1=1;
								
							}
						}
						
						if(flag1==1)
						{
							temp=a[t];
							a[t]=a[j];
							a[j]=temp;
						}
						
						
						for(i=t+1;i<=(k+t+1)/2;i++)
						{
							temp=a[i];
							a[i]=a[k+t+1-i];
							a[k+t+1-i]=temp;
						}
					}
					
					 for(i=1;i<=k;i++)
					{
						if(a[i]%2==0)
							
							cout<<char((a[i]-2)/2+'a');
						else 
							cout<<char((a[i]-1)/2+'A');
					}
					cout<<endl;
					m--;
					
			}
	}
	return 0;
}

