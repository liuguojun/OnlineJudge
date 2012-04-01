#include<stdio.h>

void main()
{
int n;
while(scanf("%d",&n))
{
if(n==0)break;
if(n%2==0){
	printf("No Solution!");
printf("\n");
}
else printf("%d\n",n-1);
}

}

