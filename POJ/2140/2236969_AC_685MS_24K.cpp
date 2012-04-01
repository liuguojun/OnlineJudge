#include<stdio.h>
#include<math.h>
int i,j,n,t=0,s;
void main(){
 	scanf("%d",&n);
 	for(i=1;s=i,i<=n/2;i++){
 		for(j=i+1;j<=n;j++){
 			s=s+j;
 			if(s==n) {t++;break;}
 			else if(s>n)break;
		}
	}	printf("%d\n",t+1);
 }    


