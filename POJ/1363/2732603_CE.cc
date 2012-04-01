#include<stdio.h>
#include<iostream>
void main()
{
	int t,i;
	while(scanf("%d",&t))
	{
		int a,b[1000];
		if(t==0) break;
		scanf("%d",&a);
		while(a)
		{
			int c=1,d=0;
			for(i=1;i<=t;i++)
			{
				b[d]=i;
				while(d>=0&&b[d]==a)
				{
					if(c==t) break;
					scanf("%d",&a);
					c++;d--;	
				}
				if(d>0)
				{
				if(b[d]>a)
				{
					while(scanf("%d",&a))
						{
							c++;
							if(c==t) break;
						}

					break;
				}
				}
				d++;
			}
			if(i!=t+1) printf("No\n");
			else printf("Yes\n");
			memset(b,0,sizeof(b));
			scanf("%d",&a);
		}
		printf("\n");	
	}
}
	
