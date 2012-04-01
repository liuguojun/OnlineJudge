
#include<iostream>
#include<cstring>
using namespace std;
struct s
{
	char str[10];
	int a[26];
};
int com(const void*p,const void*q)
{
	return strcmp((char*)p,(char*)q);
}
int main()
{
	s zidian[210];
	char str[10];
	int k;
	k=0;
	while(cin>>zidian[k].str)
	{if(strcmp(zidian[k].str,"XXXXXX")==0)break;
	else k++;
	}
	while(cin>>str)
	{if(strcmp(str,"XXXXXX")==0)break;
		int i,j,a[26]={0},flag=0,num=0;
		char ch[100][10];
		for(i=0;str[i]!=0;i++)
			a[str[i]-'a']++;
		for(i=0;i<k;i++)
		{
			for(j=0;j<26;j++)
				zidian[i].a[j]=0;
			for(j=0;zidian[i].str[j]!=0;j++)
				zidian[i].a[zidian[i].str[j]-'a']++;
		}
		for(i=0;i<k;i++)
		{
			flag=0;
			for(j=0;j<26;j++)
				if(a[j]!=zidian[i].a[j])
					flag=1;
				if(flag==0)
				{
					strcpy(ch[num],zidian[i].str);
					num++;
				}
		}
		
		qsort(ch,num,sizeof(ch[0]),com);
		if(num==0)
			cout<<"NOT A VALID WORD"<<endl<<"******"<<endl;
		else {
			for(i=0;i<num;i++)
				cout<<ch[i]<<endl;
			cout<<"******"<<endl;
		}
	}
	return 0;
}







