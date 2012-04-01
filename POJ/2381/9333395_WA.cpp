#include <iostream>
#include <bitset>

using namespace std;

int flag[16000010] = {0};

int main()
{
    int  a, c, m, R0;
    cin >> a >> c >> m >> R0;
    int max = -1, R1, i;

    while( true )
    {
        R1 = (a*R0  + c) % m;

        if( flag[R1] )
            break;
        else {

            flag[R1] = 1;
            R0 = R1;
        }

    }
    int last = -1, curr = -1;
    for( i = 0; i < 16000001; i++ )
    {
        if(flag[i])
        {
            if( last==-1 && curr==-1)
                curr = i;
            else{

                last = curr;
                curr = i;

                if(max < curr - last)
                    max = curr - last;
            }
        }


    }

    cout << max <<endl;
    return 0;
}
