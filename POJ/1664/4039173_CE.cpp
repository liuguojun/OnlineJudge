#include<iostream>
using namespace std;
int f(int m, int n){int a=1;
    if(n==１ || m==0){
a=1;return a;}
    if(n>m) return f(m,m);
    return f(m,n-1)+f(m-n,n);
}
int main()
{
int k;
cin>>k;
while(k--)
{
int m,n;
cin>>m>>n;
cout<<f(m,n)<<endl;
}
return 0;
}
