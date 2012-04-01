#include<stdio.h>
void main()
{
	int n;scanf("%d",&n);
	while(n--)
	{
		int a,b,c,d,e,f,g,h,i,j,k,s[1005]={0};
		scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
		s[0]=a;s[1]=b;s[2]=c;
		for(j=3;j<=i;j++)
		{
			if(j%2==1)
			{
				k=d*s[j-1]+e*s[j-2]-f*s[j-3];
				while(k<0)
				{
					k+=g;
				}
				k=k%g;
				s[j]=k;
			}
			else {
				k=f*s[j-1]-d*s[j-2]+e*s[j-3];
				while(k<0)
				{
					k+=h;
				}
				k=k%h;
				s[j]=k;
			}
		}
		printf("%d\n",s[i]);
	}
}
