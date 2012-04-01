#include<iostream>
#include<cstring>
using namespace std;
char f[205][300];
char temp[300],sum[300];
void add()
{
	int i,j,a[300]={0},b[300]={0};
	strrev(temp);strrev(sum);
	for(i=0;temp[i]!=0;i++)
		a[i]=temp[i]-'0';
	for(j=0;sum[j]!=0;j++)
		b[j]=sum[j]-'0';
	for(i=0;i<300;i++)
	{
		a[i]+=b[i];
		if(a[i]>9)
		{
			a[i+1]+=a[i]/10;
			a[i]=a[i]%10;
		}
	}
	for(j=299;j>=0;j--)
		if(a[j]!=0)break;
		for(i=j;i>=0;i--)
			sum[j-i]=a[i]+'0';
		sum[j-i]=0;
}
void multiply(int p,int q)
{
	char ch1[300],ch2[300];
	int i,j,a[150]={0},b[150]={0},c[305]={0};
	strcpy(ch1,f[p]);
	strcpy(ch2,f[q]);
	strrev(ch1);
	strrev(ch2);
	for(i=0;ch1[i]!=0;i++)
		a[i]=ch1[i]-'0';
	for(i=0;ch2[i]!=0;i++)
		b[i]=ch2[i]-'0';
	int max=strlen(ch1)>strlen(ch2)?strlen(ch1):strlen(ch2);
	for(i=0;i<max;i++)
		for(j=0;j<max;j++)
			c[i+j]+=a[i]*b[j];
		for(i=0;i<max*2;i++)
		{
			if(c[i]>9)
			{
				c[i+1]+=c[i]/10;
				c[i]=c[i]%10;
			}			
		}
		
		for(j=304;j>=0;j--)
			if(c[j]!=0)break;
			for(i=j;i>=0;i--)
				temp[j-i]=c[i]+'0';
			temp[j-i]=0;
}


void funtion()
{
	int i,j;
	
	for(i=4;i<=200;i=i+2)
	{
		
		sum[0]=0;
		for(j=2;j<=i;j=j+2)
		{
			temp[0]=0;;
			if(j==2||j==i)
			{
				
				multiply(2,i-2);
				add();
			}
			else {
				multiply(j-2,i-j);
				add();
			}
		}
		strcpy(f[i],sum);
	}
}

int main()
{
	int n;
	strcpy(f[2],"1");
	funtion();
	while(cin>>n)
	{
		if(n==-1)break;
		n=n*2;
		cout<<f[n]<<endl;
	}
	return 0;
}