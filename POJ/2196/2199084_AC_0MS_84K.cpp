#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=2992;i<10000;i++)
	{
		char ch[3][5];
		int a[3]={0};
		
		itoa(i,ch[0],10);
		itoa(i,ch[1],12);
		itoa(i,ch[2],16);
	
		for(j=0;j<3;j++)
		{
			for(k=0;ch[j][k]!=0;k++)
			
				if(ch[j][k]>='0'&&ch[j][k]<='9')
					a[j]+=ch[j][k]-'0';
				else a[j]+=ch[j][k]-'a'+10;
		}
		if((a[0]==a[1])&&(a[1]==a[2]))
			cout<<i<<endl;
				}
	return 0;
}
