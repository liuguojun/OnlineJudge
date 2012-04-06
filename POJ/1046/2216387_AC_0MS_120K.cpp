#include<iostream>
#include<cmath>
using namespace std;

struct RGB
{
	int a;
	int b;
	int c;
}s[1000];

int main()
{
    int i, j, k=100000000, a, b, c, d;

	for (i=0; i<16; i++)
        cin >> s[i].a >> s[i].b >> s[i].c;
		
    
    while (cin >> a >> b >> c) {
	
            k=100000000;
			
            if (a==-1 && b==-1 && c==-1)
                break;
			
            for (i=0; i<16; i++) {

				d = pow(a-s[i].a,2)+pow(b-s[i].b,2)+pow(c-s[i].c,2);
				
			    if (k>d) {
                    k = d;
                    j = i;
                }
			}

			cout << "(" << a << "," << b << "," << c << ") maps to (" << 
                s[j].a << "," << s[j].b << "," << s[j].c << ")" << endl;
	}
	
    return 0;
}


