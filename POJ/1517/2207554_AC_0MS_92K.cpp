#include<iostream>
#include<cmath>
#include <iomanip> 

using namespace std;
int main()
{
	int i,j;
	double t=1,m=0;
	cout<<"n e"<<endl<<"- -----------"<<endl;

	for(i=0;i<10;i++)
	{
		t=1;
		for(j=1;j<=i;j++)
			t=t*j;
		m+=1.0/t;
		
		if(i==0)cout<<"0 1"<<endl;
	if(i==1)cout<<"1 2"<<endl;
	if(i==2)cout<<"2 2.5"<<endl;
	if(i>2)cout<<i<<" "<<setprecision(9)<<setiosflags(ios::fixed)<<m<< endl;
	}
	return 0;
}

