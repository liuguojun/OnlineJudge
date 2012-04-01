#include <iostream>

using namespace std;

int main()
{
    char s[100010], t[100010];
    while(cin >> s >> t)
    {
        char *curr = s;
        char *dst = t;
        int errorcode = 0;
        while( *curr )
        {
            while(*dst && *dst != *curr)
                dst++;



            if( *dst == 0  )
            {
                errorcode = 1;
                goto L;
            }
            curr++;
            dst++;
        }
L:
        if(errorcode)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
