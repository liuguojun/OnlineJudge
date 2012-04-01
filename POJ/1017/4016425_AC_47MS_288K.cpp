#include<iostream>
using namespace std;
int main()
{
	int a1,a2,a3,a4,a5,a6;
	while(cin>>a1>>a2>>a3>>a4>>a5>>a6)
	{
		if(a1==0&&a2==0&&a3==0&&a4==0&&a5==0&&a6==0)break;
		int sum=0,p1=0,p2=0,temp;
        int Contain2[4] = { 0, 5, 3, 1 };
        int Contain1[4] = { 0, 7, 6, 5 };  
		sum+=a6;
		sum+=a5;
		p1+=a5*11;
		sum+=a4;
		p2+=a4*5;
		if(a3%4!=0)sum+=a3/4+1;
		else sum+=a3/4;
		p2+=Contain2[a3%4];
        p1+=Contain1[a3%4];
		if(a2<=p2)
		p1+=4*(p2-a2);
		else {
			temp=a2-p2;
			if(temp%9==0)sum+=temp/9;
			else {
				sum+=temp/9+1;
			p1+=(9-temp%9)*4;
			}
		}

		if(a1>p1)
		{
			temp=a1-p1;
			if(temp%36==0)sum+=temp/36;
			else sum+=temp/36+1;
		}
		cout<<sum<<endl;
	}
	return 0;
}



