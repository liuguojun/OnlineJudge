// Author: Guojun Liu
// Date: 2012/03/22

#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
using namespace std;

const int N=100010;
long long dis[ N+1 ]={0};
const int dif = 100000000;

vector<int> center;

struct Point{
    int x;
    int y;
}points[N];

int Distance(Point &p, Point &q)
{
    int tmp1, tmp2;
    if(p.x > q.x)
        tmp1 = p.x - q.x;
    else
        tmp1 = q.x - p.x;

     if( p.y > q.y)
        tmp2 = p.y - q.y;
    else
        tmp2 = q.y - p.y;

    return tmp1>tmp2 ? tmp1:tmp2;
}

int main()
{
    int M;
    cin >> M;

    int i=1, j, k;

    long long x=0, y=0;

    while (i<M+1) {
        cin >> points[i].x >> points[i].y;
        ++i; 
        x+=points[i].x;
        y+=points[i].x;
    }

    x = x/M;
    y = y/M;

    Point tmp={(int)x,(int)y};

    for (i=1; i<M+1; i++) {
        if (Distance(points[i], tmp) < dif)
            center.push_back(i);
    }

    long long min = LONG_LONG_MAX, tmp1=0;

    int curr;

    vector<int>::iterator iter = center.begin();

    for (; iter != center.end(); ++iter) {
        curr = *iter;
        tmp1 = 0;

        for (i=1; i<M+1; i++)
          tmp1 += Distance(points[i], points[curr]);

        if(min > tmp1)
            min=tmp1;
    }

    cout<<min<<endl;
    return 0;
}

