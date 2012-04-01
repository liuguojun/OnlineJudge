#include<iostream>
using namespace std;
int a,b;
char maze[105][105];

int main()
{
				int i,j,sum=0;
				cin>>a>>b;
				for(i=0;i<=a+1;i++)
					for(j=0;j<=b+1;j++)
						maze[i][j]='.';
					for(i=1;i<=a;i++)
						for(j=1;j<=b;j++)
							cin>>maze[i][j];
						
						for(i=1;i<=a;i++)
							for(j=1;j<=b;j++)
							{
								if(maze[i][j]=='W')
								{
									if(maze[i+1][j]=='.'&&maze[i-1][j]=='.'&&maze[i][j+1]=='.'&&maze[i][j-1]=='.'&&maze[i+1][j+1]=='.'
										&&maze[i-1][j-1]=='.'&&maze[i+1][j-1]=='.'&&maze[i-1][j+1]=='.')
										
									{
										
										maze[i][j]='.';
										sum++;
										
									}
									else maze[i][j]='.';
								}
							}
							cout<<sum<<endl;
							return 0;
}