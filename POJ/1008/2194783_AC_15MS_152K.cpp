#include<iostream>
using namespace std;
int main()
{
	int m,k;
	cin>>m;
	cout<<m<<endl;
char str1[19][7]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", 
"chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet"},

			str2[20][10]={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", 
			"muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};



	for(k=0;k<m;k++)
	{
		char ch1[4],ch2[7];
		int h,n,i,j=0,k=0;
		cin>>ch1>>ch2>>n;
		for(i=0;ch1[i]!='.';i++)
			k=k*10+ch1[i]-'0';
		k=k+1;
		for(i=0;i<19;i++)
			if(strcmp(str1[i],ch2)==0)break;
		k=k+i*20;
		k=k+365*n;
		j=k/260;
		h=k%260;
		if(h==0)cout<<"13 ahau "<<j-1<<endl;
		else if(h%13==0)cout<<"13"<<" "<<str2[h%20-1]<<" "<<j<<endl;
		else  if(h%20==0)cout<<h%13<<" "<<"ahau"<<" "<<j<<endl;
		else cout<<h%13<<" "<<str2[h%20-1]<<" "<<j<<endl;
	}
	return 0;
}

		
