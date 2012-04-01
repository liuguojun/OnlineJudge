#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{
int a,b,c;
cin>>a>>b>>c;
if(a<b-c)cout<<"advertise"<<endl;
if(a==b-c)cout<<"does not matter"<<endl;
if(a>b-c)cout<<"do not advertise"<<endl;
}
return 0;
}
