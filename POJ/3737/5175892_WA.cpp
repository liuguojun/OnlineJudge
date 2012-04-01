#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	double s;
	while(cin>>s)
	{
		double r=0, h,v;
		double pi = 3.14159265;
		double srcr,srch,srcv=0,temp;
	
		for(;pi*r*r < s; r+=0.01)
		{
			temp = s/(pi*r);
			h = sqrt(temp*(temp-2*r));
			v = pi*r*r*h/3;
			if(v - srcv >0 )
			{
				srcv = v;
				srcr = r;
				srch =h;
				//cout<<srcv<<endl<<srch<<endl<<srcr<<endl;
			}
		}
	//cout<<srcv<<endl<<srch<<endl<<srcr<<endl;
		printf("%.2f\n%.2f\n%.2f\n",srcv,srch,srcr);
	}
	return 0;
}

