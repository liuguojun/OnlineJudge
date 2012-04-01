#include <iostream.h>
#include <string.h>

int set=1;
char get[10][15];
int i,j,k;
int count=1;

void fun()
{
	for(i=0;i<count-1;i++)
	{
		for (j=i+1;j<count;j++)
		{
			for(k=0;get[i][k]!='\0'&&get[j][k]!='\0';k++)
			{
				if (get[i][k]!=get[j][k]) break;
			}
			if (get[i][k]=='\0'||get[j][k]=='\0')
			{
				cout<<"Set "<<set++<<" is not immediately decodable"<<endl;
				count=1;
				return;
			}			
		}
	}
	cout<<"Set "<<set++<<" is immediately decodable"<<endl;
	count=1;
	return;
}

int main()
{
	while (cin>>get[0])
	{
		for(i=1;;i++)
		{
			cin>>get[i];
			if (strcmp(get[i],"9")==0) break;
			count++;
		}
	//	cout<<count<<endl;
		fun();
	}
	return 0;
}
