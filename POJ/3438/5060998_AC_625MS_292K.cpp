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
for(i=0,j=1;s[i]!=0;i++)
{
if(s[i+1]==0){cout<<j<<s[i];}
else {
if(s[i]==s[i+1])
j++;
else {
cout<<j<<s[i];
j=1;
}
}
}
cout<<endl;
}
return 0;
}


