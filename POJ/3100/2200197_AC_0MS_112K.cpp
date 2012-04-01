#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int b,n;
    cin>>b>>n;
    while(b!=0&&n!=0)
    {    
        int i=int(pow(b,1.0/n));
        int a=1,c=1;
        while(n--) {a*=i;c*=(i+1);}
        if(b-a<c-b) cout<<i<<endl;
        else cout<<i+1<<endl;
        cin>>b>>n;
    }
    return 0;	 	
}

