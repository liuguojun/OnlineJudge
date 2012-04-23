// Author: Guojun Liu
// Date: 2012/03/22

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;

    char str[120];
    
    while (T--) {
        
        cin >> str;
        int len = strlen(str);

        int dp[100][100][3] = {0};

        int i, j, k;

        for (i=0; str[i]!=0; i++)
            dp[i][i][str[i]-'a'] = 1;

        int max = 0;

        for (j=1; j<len ; j++)
            for (i=0; i<len && i+j<len; i++) {
                for (k=i; k<i+j; k++) {
                    dp[i][i+j][0] += dp[i][k][1]*dp[k+1][i+j][2]
                                     +  dp[i][k][2]*dp[k+1][i+j][1];

                    dp[i][i+j][1] += dp[i][k][0]*dp[k+1][i+j][2]
                                     +  dp[i][k][2]*dp[k+1][i+j][0];

                    dp[i][i+j][2] += dp[i][k][1]*dp[k+1][i+j][0]
                                     +  dp[i][k][0]*dp[k+1][i+j][1];


                    if (dp[i][i+j][0] !=0 || 
                        dp[i][i+j][1] !=0 ||
                        dp[i][i+j][2] !=0  ) {
                        
                        if(max<j)
                            max = j;
                    }   
                }
            }

            cout << len-max << endl;
    }
    return 0;
}

