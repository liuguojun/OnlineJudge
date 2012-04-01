#include<stdio.h>
#include<stdlib.h>
int my_comp( const void *a,const void *b)
{
	int *m,*n;
	m=(int *)a;
	n=(int *)b;
	return *n-*m;
}
int match(int a,int b)
{
	if(a>b) return 200;
	else if(a==b) return 0;
	else return -200;
}
int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int State[1005][1005];
int main()
{
	int Tian[1005],Qi[1005];
	int horse_num,max_money;
	int i,j,k;
	for(;;)
	{
		scanf("%d",&horse_num);
		if(horse_num==0) break;
		for(i=0;i<horse_num;i++)
		{
			scanf("%d",&Tian[i]);
		}
		for(i=0;i<horse_num;i++)
		{
			State[0][i]=0;
			scanf("%d",&Qi[i]);
		}
		qsort(Tian,horse_num,sizeof(Tian[0]),my_comp);
		qsort(Qi,horse_num,sizeof(Qi[0]),my_comp);
		for(i=1;i<=horse_num;i++)
		{
			State[i][0]=State[i-1][0]+match(Tian[horse_num-i],Qi[i-1]);
			State[i][i]=State[i-1][i-1]+match(Tian[i-1],Qi[i-1]);
			for(j=1;j<i;j++)
			{
				State[i][j]=max(State[i-1][j-1]+match(Tian[j-1],Qi[i-1]),State[i-1][j]+match(Tian[horse_num+j-i],Qi[i-1]));
			}
		}
		max_money=State[horse_num][0];
		for(i=1;i<horse_num;i++)
		{
			if(State[horse_num][i]>max_money)
			{
				max_money=State[horse_num][i];
			}
		}
		printf("%d\n",max_money);
		for(i=0;i<=horse_num;i++)
		{
			Tian[i]=0;
			Qi[i]=0;
			for(j=0;j<=horse_num;j++)
			{
				State[i][j]=0;
			}
		}
	}
}

