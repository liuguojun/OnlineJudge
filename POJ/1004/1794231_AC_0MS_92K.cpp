#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a[12];
	
    while (cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]>>a[10]>>a[11]) {

		int i;
		double sum = 0.0;
		
        for (i=0; i<12; i++)
			sum=sum+a[i];
		
        cout << "$" << setprecision(2) << 
            setiosflags(ios::fixed) << sum/12 << endl;
	}
	
	return 0;
}	
