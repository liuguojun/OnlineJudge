#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    vector<int> factor;
    vector<long long> unfriendly;

    int i;
    long long j;

    for (i=0; i<N; ++i) {
        cin >> j;
        unfriendly.push_back(j);
    }


    for (i=1; i+i <= K; ++i) {

        if (K%i==0)
            factor.push_back(i);
    }
    
    factor.push_back(K);

    int total = 0;

    vector<int>::iterator f_iter;
    vector<long long>::iterator u_iter;

    for (f_iter=factor.begin(); f_iter!=factor.end(); ++f_iter) {

        for (u_iter=unfriendly.begin(); u_iter!=unfriendly.end(); ++u_iter)
            if ((*u_iter)%(long long)(*f_iter)==0)
                break;

        if (u_iter==unfriendly.end())
            ++total;

    }

    cout << total << endl;

    return 0;
}

