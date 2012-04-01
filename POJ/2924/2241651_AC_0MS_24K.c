#include<stdio.h>
#include<math.h>

int main()
{
	__int64 x,y;
	__int64 sum;
	int i,n;
//	cin>>n; 
         scanf("%d",&n) ;
	for(i=0;i<n;i++)
	{       
		//int flag=0;
		

		scanf("%I64d%I64d",&x,&y);
		

		sum=(x+y)*(y-x+1)/2;
	//	if(flag==1)printf("-");
		printf("Scenario #%d:\n",i+1);

		printf("%I64d\n",sum);

		printf("\n");
	}
	return 0;
}

