#include<stdio.h>
int main()
{int cnt=0,i;long s;
  scanf("%ld",&s);
  for(i=1;s>=(i+1)*i/2;i++)
     if((s-(i-1)*i/2)%i==0)cnt++;
  printf("%d",cnt);    
}
