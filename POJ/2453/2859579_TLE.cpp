#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		char str[100],str1[100];
		int i,j,k1=0,k2=0;
		itoa(n,str,2);
		for(i=0;str[i]!=0;i++)
			if(str[i]=='1')
				k1++;
			for(j=n+1;;j++)
			{
				k2=0;
			itoa(j,str1,2);
			for(i=0;str1[i]!=0;i++)
				if(str1[i]=='1')k2++;
				if(k2==k1)break;
			}
			cout<<j<<endl;
	}
	return 0;
}
