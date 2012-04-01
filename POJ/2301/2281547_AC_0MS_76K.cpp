#include<iostream.h>
#include<string.h>
#include <stdio.h>
#include<math.h>
int main()
{
	int i,n,s,d,max,min;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>s>>d;
		for(max=s/2;max<=s;max++)
		{
			min=s-max;
			if(max-min==d)
			{
				cout<<max<<" "<<min<<endl;break;
			}
		}
		if(max>s) {cout<<"impossible"<<endl;}

	}

    return 0;
}
