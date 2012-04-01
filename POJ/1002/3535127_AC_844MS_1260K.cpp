#include<iostream>
#include<cstring>
using namespace std;
int cmp(const void*p,const void*q)
{
	return strcmp(((char*)p),((char*)q));
}
int main()
{
	char str[200],ch[100010][10];
	int i,j,k,n,a[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,9,0},flag=0,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>str;
		k=0;
		for(j=0;str[j]!=0;j++)
		{
			if(str[j]!='-'&&str[j]!=' ')
			{
				if(str[j]>='A'&&str[j]<='Z')
					ch[i][k]='0'+a[str[j]-'A'];
				else ch[i][k]=str[j];
				k++;
			}

		}
		ch[i][k]=0;
	}
	qsort(ch,n,sizeof(ch[0]),cmp);
	
	i=0;j=0;k=0;
	while(i<n)
	{
		j=i+1;
		if(strcmp(ch[i],ch[j])==0)
		{
			
			flag=1;
			for(;j<n;j++)
				if(strcmp(ch[i],ch[j])!=0)
					break;
				k=j-i;
				for(m=0;m<3;m++)
					cout<<ch[i][m];
				cout<<"-";
				for(;ch[i][m]!=0;m++)
					cout<<ch[i][m];
				cout<<" "<<k<<endl;
				i=j;
		}
		else i++;
	}
	if(flag==0)cout<<"No duplicates."<<endl;
	return 0;
}







