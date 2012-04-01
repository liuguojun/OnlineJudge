#include<stdio.h>
main()
{
  int n,k,m,i;
    scanf("%d%d",&n,&k);
    m=n;
    while (m/k!=0)
     {
       n=n+m/k;
       m=m/k;
     }
    printf("%d\n",n);
  }
}
