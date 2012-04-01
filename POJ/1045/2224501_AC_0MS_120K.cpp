#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double Vs,R,c,n,w,VR,k;
	cin>>Vs>>R>>c>>n;
	int i;
	while(n--)
	{
		cin>>w;
		k=c*w*R;
		VR=k*Vs/sqrt(1+k*k);
		cout<< setprecision(3) << setiosflags(ios::fixed)<<VR<<endl;
	}
	return 0;
}


		