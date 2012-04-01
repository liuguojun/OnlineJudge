#include<iostream>
using namespace std;
int main()
{
	int k;
	cin>>k;
	
	for(int t=1;t<=k;t++)
	{
		int a[7][8]={0},c[7][8]={0},b[7][8]={0},i,j,flag=0;
		for(i=1;i<6;i++)
			for(j=1;j<7;j++)
				cin>>c[i][j];
			for(b[1][1]=0;b[1][1]<2;b[1][1]++)
				for(b[1][2]=0;b[1][2]<2;b[1][2]++)
					for(b[1][3]=0;b[1][3]<2;b[1][3]++)
						for(b[1][4]=0;b[1][4]<2;b[1][4]++)
							for(b[1][5]=0;b[1][5]<2;b[1][5]++)
								for(b[1][6]=0;b[1][6]<2;b[1][6]++)
								{
									for(i=1;i<6;i++)
										for(j=1;j<7;j++)
											a[i][j]=c[i][j];
										flag=0;
										for(i=2;i<6;i++)
											for(j=1;j<7;j++)
												b[i][j]=0;
											
											for(i=1;i<7;i++)
											{
												if(b[1][i]==1)
												{
													a[1][i-1]=1-a[1][i-1];
													a[1][i]=1-a[1][i];
													a[1][i+1]=1-a[1][i+1];
													a[2][i]=1-a[2][i];
												}
											}
											for(i=1;i<5;i++)
												for(j=1;j<7;j++)
												{
													if(a[i][j]==1)
													{
														b[i+1][j]=1;
														a[i+1][j]=1-a[i+1][j];
														a[i+1][j-1]=1-a[i+1][j-1];
														a[i+1][j+1]=1-a[i+1][j+1];
														a[i+2][j]=1-a[i+2][j];
													}
												}
												for(i=1;i<7;i++)
													if(a[5][i]!=0)
														flag=1;
													
													if(flag==0)
													{
														cout<<"PUZZLE #"<<t<<endl;
														for(i=1;i<6;i++)
														{
															for(j=1;j<7;j++)
																cout<<b[i][j]<<" ";
															cout<<endl;
														}
														
													}
													
								}
	}
	return 0;
}


