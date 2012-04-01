#include<iostream>
#include<cstring>
using namespace std;

bool check(char *str,char *str1)
{
	int i=0,j=0;
	for(i=0;str[i]!=0&&str1[j]!=0;i++)
	{
		if(str1[j]==str[i])
			j++;
	}
	if(j==strlen(str1))return 1;
	else return 0;
}


int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		
		char str[105],str1[105];
		cin>>str>>str1;
		if(check(str,str1)||check(str,strrev(str1)))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

