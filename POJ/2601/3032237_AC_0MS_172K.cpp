#include <stdio.h>

int main ()
{
	int n,i;
	float a,b,c[3005],sum;

	while (scanf ("%d",&n)!=EOF)
	{
		sum=0;
		scanf ("%f%f",&a,&b);
		for (i=1;i<=n;i++)
		{
			scanf ("%f",&c[i]);
			sum+=(n-i+1)*c[i];
		}
		sum=(n*a+b-2*sum)/(n+1);

		printf ("%.2f\n",sum);
	}

	return 0;
}