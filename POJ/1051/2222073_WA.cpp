#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	char ch[30][10]={".-","-...","-.-.","-..",".","..-.",
		"--.","....","..",".---","-.-",".-..","--","-.","---",
		".--.","--.-",".-.","...","-","..-","...-",".--","-..-",
		"-.--","--..","..--",".-.-","---.","----"};
	for(t=1;t<=n;t++)
	{
		char str[105],str1[500],str2[105],s[20];
		cin>>str;
		int i,j,a[50],k,m,start;
		for(i=0;str[i]!=0;i++)
		{
			if(str[i]=='_')m=26;
			else if(str[i]==',')m=27;
			else if(str[i]=='.')m=28;
			else if(str[i]=='?')m=29;
			else if(str[i]>='A'&&str[i]<='Z')
				m=str[i]-'A';
			if(i==0)strcpy(str1,ch[m]);
			else strcat(str1,ch[m]);
			a[i]=strlen(ch[m]);
		}
		k=strlen(str);
		for(i=0;i<k;i++)
			str2[i]=a[i]+'0';
		str2[i]=0;
		strrev(str2);
		for(i=0;str2[i]!=0;i++)
			a[i]=str2[i]-'0';
		start=0;
cout<<t<<": ";
		for(i=0;i<k;i++)
		{
			for(j=start;j<start+a[i];j++)
				s[j-start]=str1[j];
			s[j-start]=0;
			start=j;
			
			for(m=0;m<30;m++)
				if(strcmp(s,ch[m])==0)
				{
					if(m==26)cout<<"_";
					else if(m==27)cout<<",";
					else if(m==28)cout<<".";
					else if(m==29)cout<<"?";
					else if(m<27)cout<<char(m+'A');
				}
				
		}
cout<<endl;
	}
	return 0;
}

