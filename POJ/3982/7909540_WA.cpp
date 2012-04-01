#include <iostream>
using namespace std;
int main()
{
long long a0,a1,a2;
cin>>a0>>a1>>a2;
int i = 3;
long long  tmp;
while(i<=99)
{
tmp = a0+a1+a2;
a0 = a1;
a1 = a2;
a2 =tmp;
i++;
}
cout<<a2<<endl;
return 0;
}
