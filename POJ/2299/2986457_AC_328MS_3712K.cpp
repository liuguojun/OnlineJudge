#include <iostream>
#include<stdio.h>

__int64 count;

void Merge(int *num,int *temp, int left,int right,int middle)
{
	for(int j=left;j<=right;j++)
		temp[j]=num[j];
	int index1=left;
	int index2=middle+1;
	int i=left;
	while((index1<=middle)&&(index2<=right))
	{
		if(temp[index1]<=temp[index2])
			num[i++]=temp[index1++];
		else
		{
			num[i++]=temp[index2++];
			count+=middle+1-index1;
		}
	}
	while(index1<=middle)
		num[i++]=temp[index1++];
	while(index2<=right)
		num[i++]=temp[index2++];
}


void sort(int* num,int *temp,int left,int right)
{
	int middle;
	if(left<right)
	{
		middle=(left+right)/2;
		sort(num,temp,left,middle);
		sort(num,temp,middle+1,right);
		Merge(num,temp,left,right,middle);
	}
}

int main()
{
	int N,i;
	while(scanf("%d",&N))
	{
		if(N==0) break;
		count=0;
		int *num=new int [N];
		int *temp=new int [N];
		for(i=0;i<N;i++)
			scanf("%d",num+i);
		sort(num,temp,0,N-1);
		printf("%I64d",count);
		printf("\n");
//		cout<<count<<endl;
		delete []num;
		delete []temp;
	}
	return 0;
}
