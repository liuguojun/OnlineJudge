#include<iostream>
using namespace std;
int main()
{
	int m,h;
	cin>>m;
	for(h=0;h<m;h++)
	{
		int sec,min,hour,day,month,year,i,time,sum=0;
		char ch[4];
		int mday,mmonth,myear,mhour,mmin,msec;
		cin>>hour>>ch[0]>>min>>ch[1]>>sec;
		cin.get();
		cin>>day>>ch[2]>>month>>ch[3]>>year;
		
		int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},
			c[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
		
		sum=(year-2000)*365+(year-2000+3)/4-(year-2000+99)/100+(year-2000+399)/400;
		
		if((year%400==0)||(year%4==0&&year%100!=0))
		{
			for(i=1;i<month;i++)
				sum+=c[i];
			
		}
		
		
		else {
			
			for(i=1;i<month;i++)
				sum+=b[i];
			
			
		}
		sum=sum+day-1;
		
		
		myear=sum/1000;
		mmonth=(sum%1000)/100;
		mday=(sum%1000)%100;
		
		time=hour*3600+min*60+sec;
		time=time*125/108;
		
		
		mhour=time/10000;
		mmin=(time%10000)/100;
		msec=(time%10000)%100;
		
		
		cout<<(int)mhour<<":"<<(int)mmin<<":"<<(int)msec<<" "<<mday+1<<"."<<mmonth+1<<"."<<myear<<endl;
	}
	return 0;
}


