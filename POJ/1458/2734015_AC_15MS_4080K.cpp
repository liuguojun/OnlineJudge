#include<iostream>

using namespace std;
int main()
{
	char str1[1000],str2[1000];
	int i,j,a[1000][1000]={0};
	while(cin>>str1>>str2)
	{
		
		for(i=0;str1[i]!=0;i++)
		{
			for(j=0;str2[j]!=0;j++)
			{
				if(str1[i]==str2[j])
					a[i+1][j+1]=a[i][j]+1;
				else if(a[i+1][j]>a[i][j+1])
					a[i+1][j+1]=a[i+1][j];
				else 
					a[i+1][j+1]=a[i][j+1];
			}
		}
		cout<<a[i][j]<<endl;
	}
	return 0;
}