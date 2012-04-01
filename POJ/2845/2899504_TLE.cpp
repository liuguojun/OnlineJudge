#include<iostream>
#include<cstring>
#include<stdio.h>
int main()
{
	int n,t;
	//cin>>n;
	scanf("%d",&n);
	t=n;
	while(n--)
	{
		
		char str1[15],str2[15];
		int a[15]={0},i,j;
		//cin>>str1>>str2;
		scanf("%s",str1);scanf("%s",str2);
		strrev(str1);
		strrev(str2);
		for(i=0;str1[i]!=0;i++)
			a[i]+=str1[i]-'0';
		for(i=0;str2[i]!=0;i++)
		{
			a[i]+=str2[i]-'0';
		}
		for(i=0;i<15;i++)
			if(a[i]>1)
			{
				a[i+1]+=a[i]/2;
				a[i]=a[i]%2;
			}
		
		for(j=14;j>=0;j--)
			if(a[j]!=0)break;

//cout<<t-n<<" ";
printf("%d ",t-n);
if(j==-1)printf("0");
			else
			{
				for(i=j;i>=0;i--)
				//cout<<a[i];
				printf("%d",a+i);
			}
			
		printf("\n");
	}
	return 0;
}

