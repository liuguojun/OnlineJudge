#include<iostream>
using namespace std;
int main()
{
	char str[4][81];
	int i,j,max=0,a[26]={0},m;
	for(i=0;i<4;i++)
		cin.getline(str[i],81);
	for(i=0;i<4;i++)
		for(j=0;str[i][j]!='\0';j++)
			if(str[i][j]>='A'&&str[i][j]<='Z')
				a[str[i][j]-'A']++;
			for(i=0;i<26;i++)
				if(max<a[i])max=a[i];
				for(m=max;m>=1;m--)
				{
					for(i=0;i<26;i++)
					{if(a[i]>=m)
					cout<<"*"<<" ";
					else cout<<" "<<" ";
					}
					cout<<endl;
					
				}
				for(i=0;i<26;i++)
					cout<<char('A'+i)<<" ";
				cout<<endl;

return 0;
}

