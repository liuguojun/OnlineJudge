#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str1[20];
	while(cin.getline(str1,20))
	{
		if(strcmp(str1,"ENDOFINPUT")==0)break;
		char str2[101],str3[10];
		
		cin.getline(str2,101);
		cin.getline(str3,10);
	
		int i;
		for(i=0;str2[i]!=0;i++)
			if(str2[i]>='A'&&str2[i]<='Z')
			{
				if(str2[i]>='F'&&str2[i]<='Z')
					str2[i]=str2[i]-5;
				else str2[i]+=21;
			}
			cout<<str2<<endl;
	}
	return 0;
}

