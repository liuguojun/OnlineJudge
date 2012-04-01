#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[300];
	while(cin.getline(str,300))
	{
		if(strcmp(str,"#")==0)break;
		int i,j,k=0;
		for(i=0;str[i]!=0;i++)
		{
			if(str[i]==' ')k+=0*(i+1);
			else k+=(str[i]-'A'+1)*(i+1);
		}
		cout<<k<<endl;
	}
	return 0;
}