#include<stdio.h>
#include<math.h>
int i,j,n,t=0,s;
 void main(){
 	scanf("%d",&n);
 	for(i=1;s=i,i<=ceil(n/2);i++){//ceil向上取整
 		for(j=i+1;j<=n;j++){
 			s=s+j;
			if(s==n) {t++;break;}
			else if(s>n)break;
 		}
	}
 	printf("%d\n",t+1);
}
