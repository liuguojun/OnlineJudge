#include<stdio.h>

void main()
{
	int m,n,a,b,num;
	scanf("%d%d",&m,&n);
    while(!(m==0&&n==0))
	{
		num=m+1;
		while(n--)
		{
			scanf("%d%d",&a,&b);
			num-=(b-a+1);
		}
		printf("%d\n",num);
		scanf("%d%d",&m,&n);

	}
return 0;
}
