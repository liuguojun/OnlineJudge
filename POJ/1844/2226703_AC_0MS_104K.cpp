#include<iostream>
using namespace std;
int main()
{
	int n,i,j=0,k;
	cin>>n;
	for(i=1;;i++)
	{
		if(i*(i+1)==2*n)
		{
			break;
			cout<<i<<endl;
			j=1;
		}
		
		else if(i*(i-1)<2*n&&i*(i+1)>2*n)
			break;
	}
	if(j!=1)
	{
		k=i*(i+1)/2;
		k=k-n;
		while(k%2!=0)
		{
			i++;
			k=k+i;
		}
		cout<<i<<endl;
	}
	return 0;
}



