#include<stdio.h>
void main()
{
	int n,z;
	
	scanf("%d",&n);
	z=n;
	while(n--)
	{
		int K,L,i,j,p,b[95];
		
		//K,L分别为按键数，字母数。b数组为字母出现的频率	
		
		char a[95],s[95];//a数组存储按键，s数组存储字母
		
		scanf("%d%d",&K,&L);		
		scanf("%s%s",a,s);
		
		for(i=1;i<=L;i++)			
			scanf("%d",b+i);
		
		int m[92][92],w[92][92],keyboard[92][92],key[92]={0};
		
		//m[i][j]表示指前j个字母存储在i个按键里的price
		
		//w[i][j]表示第i个字母到第j个字母存放在同一个按键时该按键的“price”。
		
		//keyboard[i][j]表示前j个字母放在i个按键里，最后的一个按键保存几个字母
		
		//key数组存储第i个按键里存放几个字母
		
		for(i=1;i<=L;i++)//初始化
			w[i][i]=0;		
		
		for(i=1;i<=L;i++)     //预处理，求出第i个字母到第j个字母存放于同一按键的price
			for(j=i;j<=L;j++)
				w[i][j]=w[i][j-1]+(j-i+1)*b[j];
		
			
			for(i=1;i<=L;i++)
				m[1][i]=w[1][i];
			
			for(i=2;i<=K;i++)
				for(j=i;j<=i+L-K;j++)
				{
					int t=1000000000;
					
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


