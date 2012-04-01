#include <iostream>
#include <cstring>
using namespace std;
int digit[10][7]={ 
{1,1,1,0,1,1,1},
{0,0,1,0,0,1,0},
{1,0,1,1,1,0,1},
{1,0,1,1,0,1,1},
{0,1,1,1,0,1,0},
{1,1,0,1,0,1,1},
{1,1,0,1,1,1,1},
{1,0,1,0,0,1,0},
{1,1,1,1,1,1,1},
{1,1,1,1,0,1,1}
};
int main()
{
	int m, total=0;
	char str[20];
	while(cin>>m >> str)
	{
		total++;
		if(total > 1)
			cout<<endl;

		if( m == 0 && strcmp( str, "0") == 0)
			break;

		int len = strlen(str);

		int i,j,k;
		char c;

		// output 1st line
		for( i = 0; i < len; i++)
		{
			cout<<" ";
			if(digit[str[i]-'0'][0] == 1)
				c = '-';
			else c = ' ';
			for( j =1;j<=m;j++)
				cout<<c;
			cout<<" ";
			cout<<" ";
		}
		cout<<endl;

		// output 2~s+1 line
		for( k = 2; k<= m+1; k++)
		{
			for( i = 0; i < len; i++)
			{
				if(digit[str[i]-'0'][1] == 1)
					c = '|';
				else c = ' ';
				cout<<c;

				for( j =1;j<=m;j++)
					cout<<" ";

				if(digit[str[i]-'0'][2] == 1)
					c = '|';
				else c = ' ';
				cout<<c;

				cout<<" ";
			}
			cout<<endl;
		}
		//output s+2 line
		for( i = 0; i < len; i++)
		{
			cout<<" ";
			if(digit[str[i]-'0'][3] == 1)
				c = '-';
			else c = ' ';
			for( j =1;j<=m;j++)
				cout<<c;
			cout<<" ";
			cout<<" ";
		}
		cout<<endl;


		//output s+3~2s+2 line
		for( k = m+3; k<= 2*m+2; k++)
		{
			for( i = 0; i < len; i++)
			{
				if(digit[str[i]-'0'][4] == 1)
					c = '|';
				else c = ' ';
				cout<<c;

				for( j =1;j<=m;j++)
					cout<<" ";

				if(digit[str[i]-'0'][5] == 1)
					c = '|';
				else c = ' ';
				cout<<c;

				cout<<" ";
			}
			cout<<endl;
		}

		//output 2s+3 line
		for( i = 0; i < len; i++)
		{
			cout<<" ";
			if(digit[str[i]-'0'][6] == 1)
				c = '-';
			else c = ' ';
			for( j =1;j<=m;j++)
				cout<<c;
			cout<<" ";
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}



