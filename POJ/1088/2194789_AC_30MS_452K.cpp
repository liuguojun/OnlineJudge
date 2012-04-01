#include <iostream>
#include <memory.h>
using namespace std;
int a[102][102], d[102][102], x[4] = {0, 0, 1, -1}, y[4] = {1, -1, 0, 0};
int work(int i, int j)
{
	if(d[i][j] > 0)
		return d[i][j];
	int k;
	d[i][j] = 1;
	for(k = 0; k < 4; k++)
	{
		if(a[i][j]<a[i+x[k]][j+y[k]])
		{
			if(d[i][j]<=work(i+x[k],j+y[k]))
				d[i][j]=work(i+x[k],j+y[k])+1;
		}
	}
	return d[i][j];
}

int main()
{
	int r, c, i, j, max = 1;
	cin >> r >> c;
    memset(d,-1,sizeof(d));
	memset(a,-1,sizeof(a));
	for(i = 1; i <= r; i++)
		for(j = 1; j <= c; j++)
			cin >> a[i][j];
	for(i = 1; i <= r; i++)
		for(j = 1; j <= c; j++)
		{
			if(work(i,j)>max)
				max=work(i,j);
		}
	cout << max << endl;
	return 0;
}

