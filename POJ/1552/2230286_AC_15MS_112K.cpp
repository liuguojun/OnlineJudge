#include<iostream>
using namespace std;
int main()
{
	double a[16];
	
	int i,j,num=0,sum=0;
	
	
	while(1)
	{
		for(i=0;i<16;i++)
		{
			cin>>a[i];
			if(a[i]==-1)break;
			else
			{
			if(a[i]==0)
				break;
			else
				num++;
			}
			
		}
		if(num==0)break;
	else	if(num!=0)
		{
			for(i=0;i<num;i++)
				for(j=0;j<num;j++)
					if(a[i]/a[j]==2)
						sum++;
					cout<<sum<<endl;
					num=0;
					sum=0;
		}
				}
	
	
	return 0;
}
