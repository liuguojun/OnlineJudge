#include<stdio.h>
int f(int n){
      int s=0,i,j,sum;
      for(i=1;i<=n;i++){
          sum=0;
          for(j=i;j<=n;j++){
               sum+=j;
               if(sum==n){s++;break;}
               if(sum>n)break;
		  }
	  }

       return (s);
}
void main(){
     int n;
     scanf("%d",&n);
     printf("%d\n",f(n));
}

