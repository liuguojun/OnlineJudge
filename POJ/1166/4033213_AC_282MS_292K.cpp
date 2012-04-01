#include<iostream>
using namespace std;
int main()
{
	int a[10],clock[10],i,j,k,b[10]={0},temp[10],min=1000000,sum=0;
	int p[10][5]={
		0,0,0,0,0,
			1,2,4,5,0,
			1,2,3,0,0,
			2,3,5,6,0,
			1,4,7,0,0,
			2,4,5,6,8,
			3,6,9,0,0,
			4,5,7,8,0,
			7,8,9,0,0,
			5,6,8,9,0};
		for(i=1;i<=9;i++)
			cin>>clock[i];
		for(a[1]=0;a[1]<4;a[1]++)
			for(a[2]=0;a[2]<4;a[2]++)
				for(a[3]=0;a[3]<4;a[3]++)
					for(a[4]=0;a[4]<4;a[4]++)
						for(a[5]=0;a[5]<4;a[5]++)
							for(a[6]=0;a[6]<4;a[6]++)
								for(a[7]=0;a[7]<4;a[7]++)
									for(a[8]=0;a[8]<4;a[8]++)
										for(a[9]=0;a[9]<4;a[9]++)
										{
											for(i=1;i<=9;i++)		
												temp[i]=clock[i];
											sum=0;
											
											for(i=1;i<=9;i++)										
												if(a[i]!=0)
												{
													for(j=0;j<5;j++)
														temp[p[i][j]]=(temp[p[i][j]]+a[i])%4;											
													
													sum+=a[i];
												}										
												int flag=0;
												for(i=1;i<=9;i++)
													if(temp[i]!=0)
														flag=1;
													if(flag!=1)											
														if(min>sum)
														{
															min=sum;
															for(j=1;j<=9;j++)												
																b[j]=a[j];													
														}
														
										}
										for(i=1;i<=9;i++)
											if(b[i]!=0)
											{
												for(k=1;k<=b[i];k++)
													cout<<i<<" ";
											}
											cout<<endl;
											return 0;
}
