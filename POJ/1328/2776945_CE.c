#include<stdio.h>
#include<math.h>

struct point{
	float x;
	float y;
	float left;
	float right;
}
s[1005];

int cmp( const void *a ,const void *B) 
{ return (*(point *)a).left > (*(point *)B).left ? 1 : -1; } 

int main()
{
	int n,d,t=0;
	while(scanf("%d%d",&n,&d))
	{
		if(n==0&&d==0)break;
		t++;		
		int i,flag=0,count=0;
		float temp;
		for(i=0;i<n;i++)
		{
			scanf("%f%f",&(s[i].x),&(s[i].y));			
			if(s[i].y>d)
				flag=1;
			temp=sqrt(pow(d,2)-pow(s[i].y,2));
			s[n].left=1000000000;
			s[n].right=1000000000;
			s[i].left=s[i].x-temp;
			s[i].right=s[i].x+temp;			
		}
		if(flag==1){
			printf("Case %d: -1\n",t);
			continue;
		}
		qsort(s,n,sizeof(s[0]),cmp);
		i=0;
		while(i<n)
		{
			if(s[i].right<s[i+1].left)
			count++;
			else {
				if(s[i].right<s[i+1].right)
					s[i+1].right=s[i].right;
			}
			i++;
		}
	printf("Case %d: %d\n",t,count);
	}
	return 0;
}

		
		
		

