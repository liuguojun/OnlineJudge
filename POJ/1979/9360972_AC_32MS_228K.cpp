#include <iostream>

using namespace std;

int maze[30][30];
int count = 0;

void solve(int x, int y)
{
   // cout<<"x:"<<x<<", y:"<<y<<endl;
    count++;
    maze[x][y] = 0;
    if(maze[x-1][y]==0 && maze[x+1][y]==0 && maze[x][y-1]==0 && maze[x][y+1]==0)
        return;
    int i,j;
    if(maze[x-1][y]==1)
        solve(x-1, y);
    if(maze[x+1][y]==1)
        solve(x+1, y);
    if(maze[x][y-1]==1)
        solve(x, y-1);
    if(maze[x][y+1]==1)
        solve(x, y+1);

    return;
}
int main()
{
    int row, col;
    int i,j;


    while( cin >> col >> row)
    {
        if( col==0 && row==0 )
            break;
        for(i=0;i<30;i++)
            for(j=0;j<30;j++)
                maze[i][j] = 0;
        count = 0;

        int x,y;
        char tmp;

        for(i=1; i<=row; i++)
            for(j=1; j<=col; j++)
            {
               cin >> tmp;
                if( tmp=='#')
                    maze[i][j] = 0;
                else if(tmp=='.')
                    maze[i][j] = 1;
                else if(tmp=='@')
                {
                    maze[i][j] = 1;
                    x = i;
                    y = j;
                }
            }
        solve(x, y);
        cout<<count<<endl;
    }
    return 0;
}
