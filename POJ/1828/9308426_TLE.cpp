#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct M
{
    int x;
    int y;
}monkey[50001];

struct K
{
    int x;
    int y;
    int flag;
};

int main()
{
    int n;
    while( cin >> n )
    {
        if( n == 0 )
            break;

        K king[50001];

        int sum_king = 0;
        int i,j, x,y;

        for(i=0; i<n; i++)
        {
            cin >> x >> y;

            // find king or not
            bool flag = false;


            bool flag1 = true;

            //has duplicate or not
         //   bool dup = false;

            if(sum_king == 0)
            {
                king[sum_king].x = x;
                king[sum_king].y = y;
                king[sum_king].flag = 1;
                sum_king++;
                continue;
            }

            //else
            for(j=0; j<sum_king; j++)
            {
                if(king[j].flag && x>=king[j].x  && y >= king[j].y)
                {
                    if(!flag)
                    {
                        flag = true;
                     //   dup = false;
                        king[j].x = x;
                        king[j].y = y;

                    }
                    else {
                        king[j].flag = 0;
                    }
                }
                if(king[j].flag && !(x<=king[j].x  && y <= king[j].y))
                    flag1 = false;

            }

            // a  new king
            if( !flag && !flag1 )
            {
                king[sum_king].x = x;
                king[sum_king].y = y;
                king[sum_king].flag = 1;
                sum_king++;

            }
        }
        j = 0;
        for(i=0; i<sum_king; i++)
            if(king[i].flag == 1)
                j++;

        cout << j << endl;
    }
    return 0;
}






