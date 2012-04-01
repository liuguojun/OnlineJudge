#include<iostream>
#include<cmath>
using namespace std;
int wall[20][20];
void change(int i,int j)
{
	wall[i][j]=1-wall[i][j];
	wall[i+1][j]=1-wall[i+1][j];	
	wall[i-1][j]=1-wall[i-1][j];
	wall[i][j+1]=1-wall[i][j+1];
	wall[i][j-1]=1-wall[i][j-1];
}

void out(int p,int q)
{
	int i,j;
	for(i=1;i<p;i++)
	{
		for(j=1;j<p;j++)
		cout<<wall[i][j];
		cout<<endl;
	}
}

int main()
{
	int n;
	cin>>n;
	while(n--)
	{		
		int size,i,j,k,sum=0,p[20]={0},max=0,carry=0;	cin>>size;	p[1]=-1;	char c;
		int maze[20][20];

		for(i=0;i<20;i++)
			for(j=0;j<20;j++)
				maze[i][j]=0;		
			for(i=1;i<=size;i++)
				for(j=1;j<=size;j++)
				{	cin>>c;
				if(c=='w')maze[i][j]=1;
				}
				
				int num=pow(2.0,size);
				for(k=1;k<=num;k++)
				{
					for(i=0;i<20;i++)
						for(j=0;j<20;j++)
							wall[i][j]=maze[i][j];
					sum=0;	p[1]++;	carry=0;
					for(i=1;i<=size;i++)
					{
						if(p[i]==2)	{p[i]=0;carry++;}						
						if(carry==1){p[i+1]+=1;carry=0;}						
						else break;
					}
					for(i=1;i<=size;i++)
						if(p[i]==1)
						{	change(1,i);
						sum++;
						}
						for(i=2;i<=size;i++)
							for(j=1;j<=size;j++)
							{
								if(wall[i-1][j]==1)
								{
									change(i,j);
									sum++;
								}
							}
							int flag=0;
							for(i=1;i<=size;i++)
								if(wall[size][i]==1){flag=1;break;}									
									if(flag==0&&max<sum)max=sum;
				}
				cout<<max<<endl;
				}	
	return 0;
}