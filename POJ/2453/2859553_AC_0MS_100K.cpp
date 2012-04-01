#include<iostream>
#include<bitset>
using namespace std;
int main(){
	int i,m,l;
	bitset<32> I(unsigned(0));
	while(scanf("%d",&I)==1){
		if(I==0)	break;
		l=0;
		while(!I[l])	l++;
		i=l;
		while(I[i])	i++;
		I.set(i);
		I.reset(i-1);
		if(l){
			for(m=0;m<i-1-l;m++)
				I.set(m);
			for(;m<i-1;m++)
				I.reset(m);
		}
		printf("%d\n",I);
	}
	return 0;
}