#include<iostream>
#include<cmath>
using namespace std;
struct point{
	double x;
	double y;
	double left;
	double right;
}
s[1005];

int main()
{
	int n,d,t=0;
	while(cin>>n>>d)
	{
		if(n==0&&d==0)break;
		t++;
		
		int i,j,flag=0,count=0;
		double temp;
		for(i=0;i<n;i++)
		{
			cin>>s[i].x>>s[i].y;
			
			if(s[i].y>d){
				flag=1;
				
			}
			temp=sqrt(pow(d,2)-pow(s[i].y,2));
		
			s[n].left=100000000000000;
			s[n].right=100000000000000;
			s[i].left=s[i].x-temp;
			s[i].right=s[i].x+temp;
			
		}
		if(flag==1){
			cout<<"Case "<<t<<": -1"<<endl;
			continue;
		}
		

		point temp1;
		for(i=0;i<n-1;i++)
			for(j=0;j<n-1-i;j++)
				if(s[j].left>s[j+1].left)
				{
					temp1=s[j];
					s[j]=s[j+1];
					s[j+1]=temp1;
				}

		i=0;
		while(i<n)
		{
			if(s[i].right<s[i+1].left)
			{count++;}

			else {
				
				if(s[i].right<s[i+1].right)
					s[i+1].right=s[i].right;
			}
			i++;
		}
		cout<<"Case "<<t<<": "<<count<<endl;
	}
	return 0;
}

		
		
		

