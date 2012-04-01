#include<stdio.h>
void main()
{
	int n,z;
	scanf("%d",&n);
	z=n;
	while(n--)
	{
		int K,L,i,j,p,b[95],flag=0;
		
		char a[95],s[95];
		
		scanf("%d%d",&K,&L);
		
		scanf("%s%s",a,s);
		for(i=1;i<=L;i++)
			
			scanf("%d",b+i);
		int m[92][92],w[92][92],keyboard[92][92],key[92]={0};
		for(i=1;i<=L;i++)
			w[i][i]=0;		
		
		for(i=1;i<=L;i++)
			for(j=i;j<=L;j++)
				w[i][j]=w[i][j-1]+(j-i+1)*b[j];
			for(i=1;i<=K;i++)
				m[i][i]=b[i];
			for(i=1;i<=L;i++)
				m[1][i]=w[1][i];
			for(i=2;i<=K;i++)
				for(j=i;j<=i+L-K;j++)
				{
					int t=1000000000;
					flag=0;
					for(p=i-1;p<j;p++)
						if(t>m[i-1][p]+w[p+1][j])
						{
							t=m[i-1][p]+w[p+1][j];
							keyboard[i][j]=j-p;
						}
						
						m[i][j]=t;
				}
				j=L;
				int sum=0;
				for(i=K;i>=1;i--)
				{
					key[i]=keyboard[i][j];
					j=j-key[i];
					sum+=key[i];
				}
				
				printf("Keypad #%d:\n",z-n);
				
				int temp=0;
				
				printf("%c: ",a[0]);
				for(j=0;j<L-sum;j++)
					
					printf("%c",s[temp++]);
			
				printf("\n");
				for(i=2;i<=K;i++)
				{
								
					printf("%c: ",a[i-1]);
					for(j=0;j<key[i];j++)
						
						printf("%c",s[temp++]);
					
					printf("\n");
					
				}
			
				printf("\n");
				
	}
}

