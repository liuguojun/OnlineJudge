// Author: Guojun Liu
// Date: 2012/03/21 

#include <iostream>
#include <algorithm>
using namespace std;

int input[100010];

int cmp(const void *p, const void *q)
{
    return *((int *)p) - *((int*)q);
}

int main()
{
    int N, K;
    int total = 0;
    int i,max;

    cin >> N >> K;

    for(i=0; i<N; ++i)
        cin >> input[i];

    sort(input, input+N);

    max = input[N-1];

    for (i=0; input[i]+K <=max; ++i) { 
        if(binary_search(input, input+N, input[i]+K)) {
            ++total++;
        }
    }

    cout << total <<endl;
    return 0;
}

