#include<iostream>
#include<stdio.h>
struct node{
	int from;
	int to;
}s[10000];
int cmp(const void*p,const void*q)
{
	return ((node*)p)->to-((node*)q)->to;
}
int com(const void*p,const void*q)
{
	return ((node*)p)->to-((node*)q)->to;
}
void main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int m,i,j,a,b,a1[10000]={0},b1[10000]={0},num1=0,num2=0,flag=0;
		scanf("%d",&m);
		for(i=0;i<m-1;i++)
			scanf("%d%d",&s[i].from,&s[i].to);
		scanf("%d%d",&a,&b);
		qsort(s,m-1,sizeof(s[0]),cmp);
		a1[num1++]=a;
		b1[num2++]=b;
		while(1)
		{
			node temp;
			temp.to=a;
			node *p=(node *)bsearch(&temp,s,m,sizeof(s[0]),com);
			if(p){
				a=p->from;
				a1[num1++]=a;
			}
			else break;
		}
		
		while(1)
		{
			node temp;
			temp.to=b;
			node *p=(node *)bsearch(&temp,s,m,sizeof(s[0]),com);
			if(p){
				b=p->from;
				b1[num2++]=b;
			}
			else break;
		}
		
		for(i=0;i<num1;i++)
		{
			for(j=0;j<num2;j++)
				if(a1[i]==b1[j]){
					flag=1;
					break;
				}
				if(flag==1)break;
		}
				printf("%d\n",a1[i]);
	}
}


