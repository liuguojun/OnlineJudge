#include <iostream>

using namespace std;
struct packet
{
    int weight;
    int value;
}p[20000];

int value[23000] = {0};


int main()
{
    int N, M;
    cin >> N >> M;
    int i,j, sum = 0;
    for( i=0; i<N; i++)
        cin >>p[i].weight >> p[i].value;
    for( i=0; i<M; i++)
        for(j=M; j>=0; j--)
        {
            if(j >= p[i].weight)
                value[j] = max(value[j], value[j-p[i].weight]+p[i].value);

        }
    cout << value[M] << endl;



    return 0;
}
