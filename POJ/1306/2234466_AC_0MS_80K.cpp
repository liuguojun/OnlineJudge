
#include <iostream.h>

unsigned int matrix[101][101];

unsigned int Method(int N, int M)
{
	if(N==M) return 1;
	if(M==0) return 1;//if(M==1) return N
	if(matrix[N][M]>0)
	{
		return matrix[N][M];
	}
	matrix[N][M]=Method(N-1, M) + Method(N-1, M-1);
	return matrix[N][M];
}

void main()
{
	int N, M;
	while(cin>>N>>M)
	{
		if(N==0) break;

		cout<<N<<" things taken "<<M<<" at a time is ";	
		if(M>N-M) M=N-M;
		cout<<Method(N, M)<<" exactly."<<endl;
	}
}
