#include<iostream>
#include<cmath>
#include<stdio.h>
bool check(int n)
{
	int i,j=0;
	if(n==3||n==2)return true;

	for(i=2;i*i<=n;i++)
		if(n%i==0){j=1;break;}
		if(j==0)return true;
		else return false;
		
	
}
int main()
{
	int n;
	while(scanf("%d",&n))
	{
		if(n==0)break;
		int i,flag=0;
		for(i=3;i<=n/2;i=i+2)	
			if(check(i)&&check(n-i))
			{
				flag=1;
			     break;
			}
			
			if(flag==1)printf("%d = %d + %d\n",n,i,n-i);
				//cout<<n<<" = "<<i<<" + "<<n-i<<endl;
			else printf("Goldbach's conjecture is wrong.\n");
				//cout<<"Goldbach's conjecture is wrong."<<endl;
	}
	return 0;
}


