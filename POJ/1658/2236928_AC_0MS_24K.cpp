#include<stdio.h>
void main()
{
	int j,k;
	scanf("%d",&k);
	for(j=0;j<k;j++)
	{
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a*d==c*b)printf("%d %d %d %d %d\n",a,b,c,d,d*c/b);
		else printf("%d %d %d %d %d\n",a,b,c,d,b+d-a);

	}

}

