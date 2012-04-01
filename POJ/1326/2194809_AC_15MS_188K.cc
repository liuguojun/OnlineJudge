#include<iostream>
using namespace std;
int main()
{
	int a;	
	char str1[20],str2[20],ch;		
	cin>>str1;
	while(str1[0]!='#')
	{	
//		cin>>str2>>a>>ch;
		double sum=0;
		while(str1[0]!='0')
		{
			cin>>str2>>a>>ch;
			switch(ch)
			{
			case'F':sum+=2.0*a;break;
			case'B':
				{
					sum+=1.5*a;
					if(sum-int(sum)!=0)
						sum=int(sum)+1;
				}break;
			case'Y':
				{
					if(a<500)
						sum+=500;
					else sum+=a;
				}break;
			}
			cin>>str1;
		}
		cout<<sum<<endl;
		cin>>str1;
	}
return 0;
}

