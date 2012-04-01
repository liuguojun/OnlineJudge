#include<iostream>
#include<stdio.h>
struct node{
	int from;
	int to;
	int value;
}point[20001];

int cmp(const void*i,const void*j)
{
	node*p=(node*)i;
	node*q=(node*)j;
	return  q->value-p->value;
}
void main()
{
	int N,M,i,k,tag[1001]={0},num=0,sum=0;
	scanf("%d%d",&N,&M);
	for(i=0;i<M;i++)
		scanf("%d%d%d",&point[i].from,&point[i].to,&point[i].value);
	qsort(point,M,sizeof(point[0]),cmp);
	
	tag[point[0].from]=1;
	num++;	
	while(1)
	{	
		int temp=0;
		k=0;
		for(i=0;i<M;i++)
		{
			if(tag[point[i].from]==1&&tag[point[i].to]==0)
			{
				if(temp<point[i].value)
				{
					temp=point[i].value;
					k=point[i].to;
				}
			}
			if(tag[point[i].from]==0&&tag[point[i].to]==1)
			{
				if(temp<point[i].value)
				{
					temp=point[i].value;
					k=point[i].from;
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
	if(num==N)printf("%d\n",sum);
	else printf("-1\n");
}

