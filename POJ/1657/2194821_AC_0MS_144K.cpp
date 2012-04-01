#include<iostream>
#include<cmath>
using namespace std;
int main()
{int i,j;

	cin>>j;
for(i=1;i<=j;i++)
	{
		char A,B,C,D;
		int x1,x2,y1,y2;
		int w,h,c,x;
		cin>>A>>B;
		cin.get();
		cin>>C>>D;
		x1='h'-A+1;
		x2='h'-C+1;
		y1=B-'0';
		y2=D-'0';
		{
			if(x1==x2&&y1==y2)
				w=0;
			else if(x1==x2&&y1!=y2)
				w=fabs(y1-y2);
			else if(x1!=x2&&y1==y2)
				w=fabs(x1-x2);
			else if(fabs(x1-x2)==fabs(y1-y2))
				w=fabs(x1-x2);
			else 
			{
				if(fabs(x1-x2)>fabs(y1-y2))
					w=fabs(x1-x2);
				else w=fabs(y1-y2);		
				
			}
		}
		
		{
			if(x1==x2&&y1==y2)
				h=0;
			else if(x1==x2||y1==y2)
				h=1;
			else if (fabs(x1-x2)==fabs(y1-y2))
				h=1;
			else h=2;
		}
		
		{
			if(x1==x2&&y1==y2)
				c=0;
			
			else if(x1==x2||y1==y2)
				c=1;
			else c=2;
		}
		cout<<w<<" "<<h<<" "<<c<<" ";
		
		{
			if ((x1+x2+y1+y2)%2!=0)
				cout<<"Inf";
			else{
				if(x1==x2&&y1==y2)
					x=0;
				
				else if(fabs(x1-x2)==fabs(y1-y2))
					x=1;
				else x=2;
					
				cout<<x;	
			}
			
			
		}
		cout<<endl;
	}
	return 0;
}



