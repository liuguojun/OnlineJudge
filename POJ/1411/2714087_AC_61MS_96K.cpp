#include <iostream.h>
#include <math.h>
void main()
{ 	
	int a[2000];
	int tp,num=0,m,c,b,p,q,n,i,j;
	double s;
	
for (i=2;i<9091;i++)
	{
		tp=0;
		for (j=2;j<=(int)sqrt(i);j++)
			if (i%j==0) {tp=1;break;}
		if (tp==0)
		{
			a[num]=i;
			num++;
		}
	}
	cin >>m>>c>>b;
while (m>0)
	{
		n=0;
		s=(double)c/b;
		for (i=num-1;i>=0;i--)
		{   if (a[i]>m) continue; 
			for (j=i;j<=num-1;j++)
			{
				if (a[j]>m||a[j]*a[i]>m||((double)a[i]/a[j])<s) break;
				if (a[j]*a[i]>n)
				{
					n=a[i]*a[j];
					p=a[i];
					q=a[j];
				}
			}
		}
cout <<p<<" "<<q<<endl;
		cin >>m>>c>>b;
	}
}

