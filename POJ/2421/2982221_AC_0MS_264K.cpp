#include<iostream>
#include<stdio.h>
struct node{int from;int to;int value;}point[9900];
int cmp(const void*i,const void*j)
{node*p=(node*)i;node*q=(node*)j;return  p->value-q->value;}
void main()
{	int N,i,j,k,m,tag[105]={0},num=0,sum=0,pig=0,a[105][105];
	scanf("%d",&N);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)scanf("%d",&a[i][j]);
		scanf("%d",&k);		
		for(i=0;i<k;i++)
		{scanf("%d%d",&j,&m);a[j-1][m-1]=0;	a[m-1][j-1]=0;}
		for(i=0;i<N;i++)
			for(j=0;j<N;j++)				
				if(i!=j)
				{point[pig].from=i+1;point[pig].to=j+1;point[pig].value=a[i][j];	pig++;}				
				
				qsort(point,pig,sizeof(point[0]),cmp);
				
				tag[point[0].from]=1;num++;	
				while(1)
				{	
					int temp=100000;k=0;
					for(i=0;i<pig;i++)
					{
						if(tag[point[i].from]==1&&tag[point[i].to]==0)
						{
							if(temp>point[i].value)
							{temp=point[i].value;k=point[i].to;	}
						}						
						if(k!=0)break;
					}
					if(k!=0)
					{	sum+=temp;tag[k]=1;}			
					else break;
					num++;if(num==N)break;
				}
				printf("%d\n",sum);
}


