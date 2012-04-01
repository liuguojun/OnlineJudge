#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{
char s[1100];
cin>>s;
int i,j,k;
for(i=0,j=0;s[i]!=0;i++)
{
if(s[i+1]==0){cout<<j<<s[i];}
else {
if(s[i]==s[i+1])
j++;
else {
j=0;
cout<<j<<s[i];}
}
}
cout<<endl;
}
return 0;
}

