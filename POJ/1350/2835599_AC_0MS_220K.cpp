#include<iostream>
#include<cstring>
using namespace std;
int cmp(const void*p,const void*q)
{	return *(char*)q-*(char*)p;}
int main()
{
	char str[10];
	while(cin>>str)
	{
		if(strcmp(str,"-1")==0)break;
		char maxStr[10],minStr[10],ch[10];
		int	len=strlen(str),max,min,sum=0;	strcpy(ch,str);		
		cout<<"N="<<ch<<":"<<endl;
		if(len!=4){	cout<<"No!!"<<endl;	continue;}
		while(1)
		{len=strlen(str);strcpy(minStr,str);
			qsort(minStr,len,sizeof(char),cmp);
			strcpy(maxStr,minStr);strrev(minStr);
			max=atoi(maxStr);min=atoi(minStr);
			if(sum==0&&max-min==0)break;
			else {sum++;cout<<max<<"-"<<min<<"="<<max-min<<endl;
				if((max-min)==0||(max-min)==6174)break;else itoa(max-min,str,10);}			
		}
if(sum==0)cout<<"No!!"<<endl;else cout<<"Ok!! "<<sum<<" times"<<endl;}
	return 0;
}






