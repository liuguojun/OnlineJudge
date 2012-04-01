#include<iostream>
using namespace std;
int main()
{
int n;
while(cin>>n)
{
if(n==0)break;
if(n%2==0)cout<<"No Solution!"<<endl;
else cout<<n-1<<endl;
}
return 0;
}