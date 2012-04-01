#include<iostream>
#include<cstring>
#include<stdio.h>
int f[205][40],temp[40];
void add(int p)
{
	int i,j;
	for(i=0;i<40;i++)
	{
		
		f[p][i]+=temp[i];
		if(f[p][i]>9999)
		{
			f[p][i+1]+=f[p][i]/10000;
			f[p][i]=f[p][i]%10000;
		}
	}
}
void multiply(int p,int q)
{
	
	int i,j;
	
	for(i=0;i<20;i++)
		for(j=0;j<20;j++)
			temp[i+j]+=f[p][i]*f[q][j];
		for(i=0;i<40;i++)
		{
			if(temp[i]>9999)
			{
				temp[i+1]+=temp[i]/10000;
				temp[i]=temp[i]%10000;
			}			
		}
		
		
}


void funtion()
{
	int i,j;
	
	for(i=4;i<=200;i=i+2)
	{
		
		for(j=2;j<=i;j=j+2)
		{
			memset(temp,0,sizeof(temp));
			if(j==2||j==i)
			{
				
				multiply(2,i-2);
				add(i);
			}
			else 
			{
				multiply(j-2,i-j);
				add(i);
			}
		}
		
	}
}

int main()
{
	int n,i,j;
	memset(temp,0,sizeof(temp));
for(i=1;i<40;i++)
		f[2][i]=0;
	f[2][0]=1;
	funtion();
	while(scanf("%d",&n))
	{
		if(n==-1)break;
		n=n*2;
		for(i=39;i>=0;i--)
			if(f[n][i]!=0)break;
			printf("%d",f[n][i]);
			i--;
			for(j=i;j>=0;j--)
				printf("%04d",f[n][j]);
			printf("\n");
			
	}
	return 0;
}
