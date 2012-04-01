#include<iostream>
using namespace std;
int cmp(const void*p,const void*q)
{
	return *(int*)p-*(int*)q;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		char str[15];
		cin>>str;
		int a[20],i,j,k,t;
		a[0]=0;
		k=strlen(str);
		for(i=0;str[i]!=0;i++)
		{
			if(str[i]>='a'&&str[i]<='z')
				a[i+1]=(str[i]-'a')*2+2;
			
			else a[i+1]=(str[i]-'A')*2+1;
		
		}
	
		for(i=0;i<k;i++)
			for(j=0;j<k-i;j++)
				if(a[j]>a[j+1])
				{
					t=a[j];a[j]=a[j+1];a[j+1]=t;
				}
				
				for(i=1;i<=k;i++)
				{ 
					if(a[i]%2==0)					
						cout<<char((a[i]-2)/2+'a');
					else 
						cout<<char((a[i]-1)/2+'A');				
				}
				cout<<endl;
				while(1)
				{				
					int l=100000,flag=0,temp,flag1=0;
					for(i=k;i>1;i--)
						if(a[i-1]<a[i])
						{flag=1;t=i-1;break;}
						
						if(flag==0)	break;
						else 
						{
							for(i=t;i<=k;i++)
								if(a[i]>a[t]&&l>a[i])
								{l=a[i];j=i;flag1=1;}
						}
						
						if(flag1==1)
						{temp=a[t];	a[t]=a[j];a[j]=temp;}
						
						for(i=t+1;i<=(k+t+1)/2;i++)
						{temp=a[i];	a[i]=a[k+t+1-i];a[k+t+1-i]=temp;}
						
						qsort(a+t+1,k-t,sizeof(a[0]),cmp);	
						for(i=1;i<=k;i++)
						{
							if(a[i]%2==0)
								cout<<char((a[i]-2)/2+'a');
							else 
								cout<<char((a[i]-1)/2+'A');
						}
	cout<<endl;
				}
	}
	return 0;
}


