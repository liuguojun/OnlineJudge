#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,k;
	cin>>n;
	for(k=0;k<n;k++)
	{
		int min=0,i,j;double hour=0; 
		char time[9],AMorPM[5],Zone[2][5];

		char Timezone[32][5]={"UTC","GMT","BST","IST","WET","WEST","CET","CEST",
			"EET","EEST","MSK","MSD","AST","ADT","NST","NDT","EST","EDT","CST","CDT","MST",
			"MDT","PST","PDT","HST","AKST","AKDT","AEST","AEDT","ACST","ACDT","AWST"};

		float Hour[32]={0,0,1,1,0,1,1,2,2,3,3,4,-4,-3,-3.5,-2.5,-5,-4,-6,-5,-7,-6,-8,
			-7,-10,-9,-8,10,11,9.5,10.5,8};

		cin>>time;

		if(strcmp(time,"noon")==0)
		{
			hour=12;
			min=0;
			
		}
		
		else if(strcmp(time,"midnight")==0)
		{
			hour=0;
			min=0;
			
		}
		else {
			for(i=0;time[i]!=':';i++)
				hour=time[i]-'0'+hour*10;
			for(i=i+1;time[i]!=0;i++)
				min=min*10+time[i]-'0';
			cin>>AMorPM;
			if((strcmp(AMorPM,"p.m.")==0)&&(hour<12))
				
				hour+=12;
			if(strcmp(AMorPM,"a.m.")==0&&hour==12)
				
				hour=0;
			
		}
		cin>>Zone[0]>>Zone[1];
		for(i=0;i<32;i++)
			if(strcmp(Zone[0],Timezone[i])==0)
				break;
			
			for(j=0;j<32;j++)
				if(strcmp(Zone[1],Timezone[j])==0)
					break;
				hour=hour+Hour[j]-Hour[i];
		

				if(hour<0)hour+=24;

				if(hour-int(hour)!=0)
				{
					hour=int(hour)+(30+min)/60;
					min=(30+min)%60;	
				}
				hour=int(hour)%24;

				if(hour==0&&min==0)
				{
					cout<<"midnight"<<endl;
					continue;
				}

				if(hour==12&&min==0)
				{
					cout<<"noon"<<endl;
					continue;
				}

				if(hour>=12&&hour<24)
				{
					if(hour>12)
						cout<<hour-12<<":";
					else cout<<hour<<":";
					if(min<10)
						cout<<0<<min<<" "<<"p.m."<<endl;
					else 
						cout<<min<<" "<<"p.m."<<endl;
				}
				else
				{
					if(int(hour)%24==0)
						cout<<12<<":";
					else cout<<hour<<":";
					if(min<10)
						cout<<0<<min<<" "<<"a.m."<<endl;
					else 
						cout<<min<<" "<<"a.m."<<endl;
				}
				
				
				
	}	
				
				
				return 0;
}



