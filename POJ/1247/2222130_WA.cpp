#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int meat[50],i,j,a=0,b=0,flag=0;
		if(n==0)break;
		for(i=0;i<n;i++)
			cin>>meat[i];
		if(n==2){
			if(meat[0]==meat[1])
				cout<<"Sam stops at position 1 and Ella stops at position 2."<<endl;
			else cout<<"No equal partitioning."<<endl;
		}
		else {
			
			for(i=1;i<n-1;i++)
			{a=0;b=0;
			for(j=0;j<=i;j++)
				a+=meat[j];
			for(j=i+1;j<n;j++)
				b+=meat[j];
			if(a==b){flag=1;break;}
			}
			if(flag==1)	cout<<"Sam stops at position "<<i+1<<" and Ella stops at position "<<i+2<<"."<<endl;
			else cout<<"No equal partitioning."<<endl;
			
		}
	}
	
	return 0;
}

