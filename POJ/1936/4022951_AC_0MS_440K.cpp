#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[100010],str2[100010];
	while(cin>>str1>>str2)
	{
		int s=strlen(str1),t=strlen(str2);
		int count=0,i=0,j=0;
		while(count<=s&&i<s&&j<t)
		{
			if(str1[i]==str2[j])
			{
				i++;j++;count++;
			}
			else j++;
		}
		if(count==s)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

