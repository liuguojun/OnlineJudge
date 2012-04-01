#include<iostream.h>

int main()
{
	int N;
	int a[31]={0};
	int S=0;//clockwise
	int E=0;//counterclockwise
	int position1, position2;
	
	while(1)
	{//////////////////////
	cin>>N;

	if(N==0)
		return 0;
	
	for(int i=1;i<=30;i++)
		a[i]=0;
	
	for(i=1;i<=N;i++)
		cin>>a[i];

	position1=1;
	position2=N;
	

	while(1)
	{//////////////////////////////////////////////////////
		if(S<=E)
		{
			S=a[position1]+S;
			position1++;
		}
		else
		{
			E=a[position2]+E;
			position2--;
		}
		if(S==E&&(position1-1)==position2)
		{
			cout<<"Sam stops at position "<<position1-1<<" and Ella stops at position "<<position2+1<<".";
			break;
		}
		if((position1-1)>position2)
		{
			cout<<"No equal partitioning.";
			break;
		}


	}///////////////////////////////////////////////////////


	}/////////////////////
	


	return 0;
}
