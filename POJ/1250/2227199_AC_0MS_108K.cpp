#include<iostream>
using namespace std;
int main()
{
	int n,i;
	while(cin>>n)
	{
		int a[26]={0},num=0,count=0;
		char str[150];
		if(n==0)
			break;
		cin>>str;
		for(i=0;str[i]!=0;i++)
		{
			if(a[str[i]-'A']==0)
			{
				a[str[i]-'A']++;
				if(num<n)		                
					num++;
				else 
				{
					a[str[i]-'A']++;
					count++;	
				}
			}
			else 
			{
				if(a[str[i]-'A']==1)
					num--;
			}
		//	cout<<num<<endl;
		}
		if(count==0)
			cout<<"All customers tanned successfully."<<endl;
		else cout<<count<<" customer(s) walked away."<<endl;
	}
return 0;
}
