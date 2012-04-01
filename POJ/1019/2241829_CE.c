#include <iostream.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    long i,j,k,m,n,sum;
	char a[10];
	int radix=10;

	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>n;
		k=1; sum=1;
		while (n>sum)
		{
			n=n-sum;
			k++;
			ltoa(k,a,radix);
			sum=sum+strlen(a);
		}
		j=1; sum=1;
		ltoa(j,a,radix);
		while (n>sum)
		{
			n=n-sum;
			j++;
			ltoa(j,a,radix);
			sum=strlen(a);
		}
		n--;
		cout<<a[n]<<endl;
	}
}
