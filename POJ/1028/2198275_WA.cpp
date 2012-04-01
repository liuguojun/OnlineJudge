#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[105][75],str1[10],str2[75];
	strcpy(str[0],"http://www.acm.org/");
	int n=0,j=0;
	while(cin>>str1)
	{
		if(strcmp(str1,"QUIT")==0)break;
		if(strcmp(str1,"VISIT")==0)
		{
			n++;
			j++;
			cin>>str2;
			strcpy(str[n],str2);
			cout<<str[n]<<endl;
		}
		if(strcmp(str1,"BACK")==0)
		{
			n--;
			if(n<0){n=0;
				cout<<"Ignored"<<endl;
			}
			else cout<<str[n]<<endl;
		}
		if(strcmp(str1,"FORWARD")==0)
		{
			n++;
			if(n>j){n=j;
				cout<<"Ignored"<<endl;
			}
			else cout<<str[n]<<endl;
		}
	}
	return 0;
}
