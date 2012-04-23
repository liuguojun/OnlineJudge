// Author: Guojun Liu
// Date: 2012/03/22

#include <iostream>
#include <cstring>
using namespace std;

inline int longestpre(char*p, char*q)
{
    int n = 0;
    while ( p && q) {
        if(*p == *q)
            n++;
        else 
            break;
        p++;
        q++;
    }
    return n;
}

int main()
{
    int testcase;
    int i, j, sum;
    char *p=NULL;
    char str[100010];
    
    cin >> testcase;
    
    while (testcase--) {

        cin >> str;
        sum = strlen(str);
        for (p=str+1; *p!=0; p++) {
            if(*str != *p)
                continue;
            sum += longestpre(str, p);
        }
        cout<<sum<<endl;
    }
    return 0;
}

