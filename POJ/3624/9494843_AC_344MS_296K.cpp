#include <iostream>

using namespace std;
struct packet
{
    int weight;
    int value;
}p[3500];

int value[13000] = {0};


int main()
{
    int N, M;
    cin >> N >> M;
    int i,j;
    for( i=0; i<N; i++)
        cin >>p[i].weight >> p[i].value;
    for( i=0; i<N; i++)
        for(j=M; j>=p[i].weight; j--)
        {
            if(j >= p[i].weight)
                value[j] = max(value[j], value[j-p[i].weight]+p[i].value);

        }
    cout << value[M] << endl;



    return 0;
}
