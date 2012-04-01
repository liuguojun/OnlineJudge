#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int  m,k;
	cin>>m;

	for(k=1;k<=m;k++)
	{int i;
		const  double pi=3.14159;
		
		float a,b,c;
		cin>>a>>b;
		c=a*a+b*b;
		for(i=1;;i++)
			if(i*50*2>=pi*c)
			{cout<<"Property "<<k<<": This property will begin eroding in year "<<i<<"."<<endl;
			break;
			}
	}
	cout<<"END OF OUTPUT."<<endl;
	return 0;
}




