#include<iostream>
#include<cstring>
using namespace std;
int Shugen(char str[1000])
{
	int i,j=0;
char m[1000];
	for(i=0;str[i]!=0;i++)
		j=str[i]-'0'+j;
	itoa(j,m,10);
	if(j>=0&&j<=9)return j;
	else return Shugen(m);
}

int main()
{
char c[1000];
	while(cin>>c)
	{
		if(c[0]=='0')break;
		else cout<<Shugen(c)<<endl;
	}
	return 0;
}

