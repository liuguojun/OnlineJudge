#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
void main()
{
	char str[10];
	while(cin>>str)
	{
	int i,j=0,k=0;
	char str1[10],str2[10];
	for(i=0;str[i]!='e';i++)
		str1[i]=str[i];
	str1[i]=0;
	for(j=i+1;str[j]!=0;j++)
		str2[j-1-i]=str[j];
str2[j-1-i]=0;
if(strcmp(str1,"00")==0&&strcmp(str2,"0")==0)break;
j=atoi(str1);k=atoi(str2);

	int m,n;
	n=j*pow(10,k);
	m=2;	
	
	int s=0;
	for(i=2;i<=n;i++)	s=(s+m)%i;
	
	cout<<s+1<<endl;
	}

}

