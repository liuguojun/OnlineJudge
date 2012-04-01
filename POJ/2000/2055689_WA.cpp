#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{if(n==0)break;
	int i,j,num=0;
	for(i=1;;i++)
		if(i*(i+1)<=2*n&&(2*n<(i+1)*(i+2)))
			break;
		
		for(j=1;j<=i;j++)
			num+=j*j;
		
		for(int k=0;k<n-i*(i+1);k++)
			num+=i+1;
		cout<<n<<" "<<num<<endl;
	}
	return 0;
} 

