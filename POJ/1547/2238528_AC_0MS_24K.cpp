#include<stdio.h>
#include<math.h>
void main(){
	int n,i,p,q,max,min,sum[10],y,x;
    scanf("%d",&n);
	while(n!=-1)
{
		struct student{
			int num1;
			int num2;
			int num3;
			char name[10];
		}stu[10];
		for(i=0;i<n;i++){
			scanf("%d %d %d %s",&stu[i].num1,&stu[i].num2,&stu[i].num3,&stu[i].name);
            sum[i]=stu[i].num1*stu[i].num2*stu[i].num3;}
			max=0;
			min=501;
			for(p=0;p<n;p++)
				if(max<sum[p])  {x=p; max=sum[p];}
			for(q=0;q<n;q++)
				if(min>sum[q])  {y=q; min=sum[q];}
			printf("%s took clay from %s.\n",stu[x].name,stu[y].name);
	     scanf("%d",&n);
	}		
	
}
