#include<iostream>
#include<cstring>
using namespace std;
char str1[30],str2[30];
void Delete_1(int n)
{
	char ch[30];
	int i,j=0;
	for(i=0;str1[i]!=0;i++)
	{
		if(i!=n)
		{
			ch[j]=str1[i];
			j++;
		}
	}
	ch[j]=0;
	strcpy(str1,ch);
}

void Delete_2(int n)
{
	char ch[30];
	int i,j=0;
	for(i=0;str2[i]!=0;i++)
	{
		if(i!=n)
		{
			ch[j]=str2[i];
			j++;
		}
	}
	ch[j]=0;
	strcpy(str2,ch);
}

bool check(int i,int j,int k)
{
	int m,n=0;
	for(m=1;m<=k;m++)
		if(str1[i+m]!=str2[j-k-1+m])
			n=1;
		if(n==1)return false;
		else return true;
}

int main()
{
	int n;
	int p,q,c[21][21];
	c[1][1]=1;c[1][0]=1;
	for(p=2;p<=20;p++)
	{
		c[p][0]=1;
		for(q=1;q<=p/2;q++)
			c[p][q]=c[p-1][q]+c[p-1][q-1];
		for(q=p/2+1;q<=p;q++)
			c[p][q]=c[p][p-q];
	}
	
	while(cin>>n)
	{
		if(n==0)break;
		cin>>str1>>str2;
		
		int i,j,k,len,r=1,temp=0,flag=0,a[30]={0};
		len=strlen(str1);
		if(len==1){
			cout<<"1"<<endl;
			//printf("1\n");
			continue;
		}
		while(len!=1)
		{
			memset(a,0,sizeof(a));
			for(i=0;str1[i]!=0;i++)
			{
				flag=0;
				for(j=0;str2[j]!=0;j++)
				{
					if(str1[i]==str2[j])
					{
						flag=1;
						for(k=1;i+k<len&&j-k>=0;k++)
						{
							if(check(i,j,k))
							{
								a[i]=k;
								break;
							}
							else a[i]=0;
						}
					}
					if(flag==1)break;
				}
			}
			for(i=len-1;i>=0;i--)
			{
				if(a[i]!=0)
				{
					len=len-a[i];
					r=r*c[n][a[i]];
					for(k=1;k<=a[i];k++)
					{
						for(j=0;str2[j]!=0;j++)
							if(str2[j]==str1[i+1])
							Delete_2(j);
						Delete_1(i+1);
					}
				}
			}
		}
		cout<<r<<endl;
	}
	return 0;
}


