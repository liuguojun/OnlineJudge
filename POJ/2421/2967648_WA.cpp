#include<iostream>
#include<stdio.h>
struct node{
	int from;
	int to;
	int value;
}point[10000];

int cmp(const void*i,const void*j)
{
	node*p=(node*)i;
	node*q=(node*)j;
	return  p->value-q->value;
}
void main()
{
	int N,i,j,k,m,tag[1001]={0},num=0,sum=0,pig=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		{
			scanf("%d",&k);
			if(k!=0)
			{
				point[pig].from=i+1;
				point[pig].to=j+1;
				point[pig].value=k;
				pig++;
			}
		}
		scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			scanf("%d%d",&j,&m);
			tag[j]=1;tag[m]=1;
			num+=2;
		}
		
		qsort(point,pig,sizeof(point[0]),cmp);
		
		while(1)
		{	
			int temp=10000;
			k=0;
			for(i=0;i<pig;i++)
			{
				if(tag[point[i].from]==1&&tag[point[i].to]==0)
				{
					if(temp>point[i].value)
					{
						temp=point[i].value;
						k=point[i].to;
					}
				}
				
				if(k!=0)break;
			}
			if(k!=0)
			{	sum+=temp;
			tag[k]=1;					
			}
			
			else break;
			num++;
			if(num==N)break;
		}
		printf("%d\n",sum);
		//else printf("-1\n");
}


