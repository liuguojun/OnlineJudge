#include <iostream>
#include <cmath>

using namespace std;

char pic[10000][10000];

void solve(int n, int x, int y)
{
    if(n==1)
    {
        pic[x][y] = 'x';
        return;
    }

    int size = (int)pow(3, n-2);

    solve(n-1, x-size, y-size);
    solve(n-1, x-size, y+size);
    solve(n-1, x, y);
    solve(n-1, x+size, y-size);
    solve(n-1, x+size, y+size);

}

int main()
{
    int n;
    while( cin>>n )
    {
        if( n==-1)
            break;

        int size = (int)pow(3, n-1);

        int i,j;

        for(i=1; i<=size; i++)
            for(j=1; j<=size; j++)
                pic[i][j] = ' ';

        solve(n, (1+size)/2, (1+size)/2);

        for(i=1; i<=size; i++)
        {
            for(j=1; j<=size; j++)
                cout<<pic[i][j];
            cout<<endl;
        }
        cout<<"-"<<endl;
    }
    return 0;
}
