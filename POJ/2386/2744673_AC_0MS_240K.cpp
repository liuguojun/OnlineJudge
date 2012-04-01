#include "stdio.h"
char water='W',land='.';
char map[110][110];
int r,c;
void find(int i,int j)
{
	if(i>0&&map[i-1][j]==water)
	{
		map[i-1][j]=land;
		find(i-1,j);
	}
	if(i>0&&j<c-1&&map[i-1][j+1]==water)
	{
		map[i-1][j+1]=land;
		find(i-1,j+1);
	}
	if(j<c-1&&map[i][j+1]==water)
	{
		map[i][j+1]=land;
		find(i,j+1);
	}
	if(i<r-1&&j<c-1&&map[i+1][j+1]==water)
	{
		map[i+1][j+1]=land;
		find(i+1,j+1);
	}
	if(i<r-1&&map[i+1][j]==water)
	{
		map[i+1][j]=land;
		find(i+1,j);
	}
	if(i<r-1&&j>0&&map[i+1][j-1]==water)
	{
		map[i+1][j-1]=land;
		find(i+1,j-1);
	}
	if(j>0&&map[i][j-1]==water)
	{
		map[i][j-1]=land;
		find(i,j-1);
	}
	if(i>0&&j>0&&map[i-1][j-1]==water)
	{
		map[i-1][j-1]=land;
		find(i-1,j-1);
	}

}
int main()
{
	int i,j;

	char ch;
	//freopen("c:\\acm\\data.txt","r",stdin);
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			while((ch=getchar())&&(ch!=water&&ch!=land));
			map[i][j]=ch;
		}
	}
	int count=0;
	while(1)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				if(map[i][j]==water)
					break;
			if(j!=c)
				break;
		}
		if(i==r&&j==c)
		{
			break;
		}
		else
		{
			count++;
			map[i][j]=land;
			find(i,j);
		}
	}
	printf("%d\n",count);
}
