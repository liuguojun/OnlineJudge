#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
bool cmp(int p,int q)
{
	return p<q;
}
int com(const void*p,const void*q)
{
	return *(int*)p-*(int*)q;
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		char str[100];
		itoa(n,str,2);
		int i,j,flag=0;
		j=strlen(str);
		for(i=0;str[i]!=0;i++)
			if(str[i]<str[i+1])
			{
				flag=1;
				break;
			}
			if(flag==0){
				str[j]='0';
				str[j+1]=0;
					j++;		
				int a[100],p;
				for(p=0;str[p]!=0;p++)
					a[p]=str[p]-'0';
				qsort(a,j,sizeof(int),com);
				while(a[0]==0)
				{
				next_permutation(a,a+j,cmp);
				}
				for(p=0;p<j;p++)
					str[p]=a[p]+'0';
				str[p]=0;	

			}
			else {
				int a[100],p;
				for(p=0;str[p]!=0;p++)
					a[p]=str[p]-'0';
				next_permutation(a,a+j,cmp);
				for(p=0;p<j;p++)
					str[p]=a[p]+'0';
				str[p]=0;
			}
			
			j=0;
			for(i=0;str[i]!=0;i++)
				j=j*2+str[i]-'0';
			
			cout<<j<<endl;
	}
	return 0;
}
