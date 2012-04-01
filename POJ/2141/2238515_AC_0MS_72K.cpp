#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	char str1[30],str2[85];
	cin.getline(str1,30);
	cin.getline(str2,85);
	int i;
	
	for(i=0;str2[i]!=0;i++)
	{
		if(str2[i]>='a'&&str2[i]<='z')
			str2[i]=str1[str2[i]-'a'];
	else if(str2[i]>='A'&&str2[i]<='Z')
			str2[i]=toupper(str1[tolower(str2[i])-'a']);
			}
	str2[i]=0;
	cout<<str2<<endl;
	
	return 0;	 	
}


