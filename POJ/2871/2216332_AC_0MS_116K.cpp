#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ double a[1000];
int i=0,j;
while(cin>>a[i])
{if(a[i]==999)break;
i++;
}
for(j=1;j<i;j++)
cout<< setprecision(2) 
<< setiosflags(ios::fixed)<< 
a[j]-a[j-1]<<endl;
cout<<"End of Output"<<endl;
return 0;
}


