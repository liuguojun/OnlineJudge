#include <iostream>
using namespace std;

int clock[9];
int a[9][9]={1,1,0,1,1,0,0,0,0,
1,1,1,0,0,0,0,0,0,
0,1,1,0,1,1,0,0,0,
1,0,0,1,0,0,1,0,0,
0,1,0,1,1,1,0,1,0,
0,0,1,0,0,1,0,0,1,
0,0,0,1,1,0,1,1,0,
0,0,0,0,0,0,1,1,1,
0,0,0,0,1,1,0,1,1};
int turn[9];
int num[9];

void main()
{
	int i,j,temp;
	for(i=0;i<9;i++) 
		cin>>clock[i];
	int min = 1000;
	
	for(turn[0]=0; turn[0]<=3;turn[0]++)
		for(turn[1]=0; turn[1]<=3; turn[1]++)
			for(turn[2]=0; turn[2]<=3; turn[2]++)
				for(turn[3]=0; turn[3]<=3; turn[3]++)
					for(turn[4]=0; turn[4]<=3; turn[4]++)
						for(turn[5]=0; turn[5]<=3; turn[5]++)
							for(turn[6]=0; turn[6]<=3; turn[6]++)
								for(turn[7]=0; turn[7]<=3; turn[7]++)
									for(turn[8]=0; turn[8]<=3; turn[8]++)
									{
										for(i=0;i<9;i++)
										{  
											temp=clock[i];
											for(j=0;j<9;j++)
												temp=temp+turn[j]*a[j][i];
											if(temp%4!= 0) 
												break;
										}
										if(i==9)
										{  
											int sum=0;
											for(j=0;j<9;j++) 
												if(turn[j]!=0) 
													sum ++;
												if(sum<min)
												{
													min = sum;
													for(j=0;j<9;j++)
														num[j] = turn[j];
												}
										} 
									} 
									
									for(i=0;i<9;i++) 
										for(j=0;j<num[i];j++)
											cout<<i+1<<" ";
										cout << endl;
}

