#include <iostream>
using namespace std;

int cicre( int n )
{
	int total = 1;

	while( n != 1)
	{
		if( n % 2 == 0)
			n = n / 2;
		else n = n * 3 + 1;
		total ++;
	}
	return total;
}

int main()
{
	int m, n;
	while( cin >> m >> n )
	{
		int max = 0;

		for( int i = m; i <= n; i++)
		{
			int tmp = cicre( i );
			if( max < tmp )
				max = tmp;
		}
		cout<<max<<endl;
	}
	return 0;
}
