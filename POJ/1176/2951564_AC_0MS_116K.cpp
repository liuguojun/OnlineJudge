#include<stdio.h>
#include<iostream>
int cmp(const void*p,const void*q)
{
	char *p1=(char*)p;
	char *q1=(char*)q;
	return strcmp(p1,q1);
}
void main()
{
	int i,j,k,m,p=0,n,c,a[10]={0},b[10]={0},s[101],flag=0;
	char ch[100][102];
	scanf("%d%d",&n,&c);
	if(c>4)
	{
	if(c%2==0)c=4;
	else c=3;
	}
	for(i=1;i<=n;i++)
		s[i]=1;
	i=0;
	while(1)
	{
		scanf("%d",a+i);
		if(a[i]==-1)
		{
			a[i]=0;
			break;
		}
		else i++;
	}
	i=0;
	while(1)
	{
		scanf("%d",b+i);
		if(b[i]==-1)
		{
			b[i]=0;
			break;
		}
		else i++;
	}
	for(j=0;j<=c;j++)		
		for(k=0;k<=c;k++)				
			for(m=0;m<=c&&(c-j-k-m)>=0;m++)
			{
				for(i=1;i<=n;i++)
					s[i]=1;	
				int t=c-j-k-m;
				if((j+t)%2==1)
				{
					for(i=1;i<=n;i=i+2)
						s[i]=1-s[i];
				}
				if((k+t)%2==1)
				{
					for(i=2;i<=n;i=i+2)
						s[i]=1-s[i];
				}				
				flag=0;
				if(m%2==1)
				{
					for(i=1;i<=n;i=i+3)
						s[i]=1-s[i];
				}			
				for(i=0;i<2;i++)
				{
				 if(a[i]!=0)
					{
						if(s[a[i]]!=1)
							flag=1;
					}
					if(b[i]!=0)
					{
						if(s[b[i]]!=0)
							flag=1;
					}
				}
				if(flag==0)
				{
					for(i=1;i<=n;i++)
						ch[p][i-1]=s[i]+'0';
					ch[p][i-1]=0;
					p++;
				}
			}
			qsort(ch,p,sizeof(ch[0]),cmp);
			i=0;			
			while(i<p)
			{
				printf("%s\n",ch[i]);
				while(strcmp(ch[i],ch[i+1])==0)
					i++;
				i++;
			}
}











