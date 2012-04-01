#include <stdio.h>
#include <string.h>

int gcd(int m, int n)
{
	if(m < n)
	{
		int tmp = m;
		m = n;
		n = tmp;
	}

	
	while( n!= 1)
	{
		if( n == 1)
			return 1;
		if( m%n == 0)
			return n;

		int tmp = m%n;
		m = n;
		n = tmp;
	}
	return 1;

}
int main()
{

	int a,b,c,d;
	char op;
	while(scanf("%d/%d%c%d/%d", &a, &b, &op, &c, &d) != EOF)
	{
	//printf("%d/%d%c%d/%d", a, b, op, c, d);
	int m = b * d;
	int n1 = a*d, n2 = b*c;

	int n;
	if( op == '+')
		n = n1 + n2;
	else n = n1 - n2;

	if( n == 0)
		printf("0\n");
	else {
		int tt = gcd(m,n);
		printf("%d/%d\n", n/tt, m/tt);
	}
	}
	return 0;
}


