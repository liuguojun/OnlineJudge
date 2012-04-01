#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int i;
		int k=1;
		for(i=2;i<=n;i++)
		{
			k*=i;
			if(k%10==0)
			{
				
				while(k%10==0)
					
					k=k/10;
			}
			k=k%1000000;
		}
		cout<<setw(5)<<n<<" -> "<<k%10<<endl;
		
	}
	return 0;
}