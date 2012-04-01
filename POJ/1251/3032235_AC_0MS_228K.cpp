#include<iostream>
using namespace std;
struct node{
	int from;
	int to;
	int value;
}point[20001];

int cmp(const void*i,const void*j)
{
	node*p=(node*)i;
	node*q=(node*)j;
	return  p->value-q->value;
}
void main()
{
	int N;
	while(cin>>N)
	{
		if(N==0)break;
		int i,j,k,tag[1001]={0},num=0,sum=0,count=0;
		for(i=0;i<N-1;i++)
		{
			char b,c;
			int temp;
			
			cin>>b>>temp;
			
			for(j=1;j<=temp;j++)
			{
				cin>>c;
				point[count].from=b-'A'+1;
				point[count].to=c-'A'+1;
				cin>>point[count].value;
				count++;
			}
		}
		
		
		qsort(point,count,sizeof(point[0]),cmp);
		
		tag[point[0].from]=1;
		num++;	
		while(1)
		{	
			int temp=10000;
			k=0;
			for(i=0;i<count;i++)
			{
				if(tag[point[i].from]==1&&tag[point[i].to]==0)
				{
					if(temp>point[i].value)
					{
						temp=point[i].value;
						k=point[i].to;
					}
				}
				if(tag[point[i].from]==0&&tag[point[i].to]==1)
				{
					if(temp>point[i].value)
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
			//if(num==N)break;
		}
		if(num==N)cout<<sum<<endl;
	}
}
	
	
	
