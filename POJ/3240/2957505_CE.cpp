#include <stdio.h>
 2#include <memory.h>
 3int n,MOD;
 4class Mat{
 5public:
 6 int v[4][4];
 7 Mat(int x){
 8  memset(v,0,sizeof(v));
 9  if (x==1)
10   v[0][0]=v[1][1]=v[2][2]=v[3][3]=1; 
11  else if (x==2){
12   v[0][0]=1; v[0][1]=5; v[0][2]=1; v[0][3]=-1;
13   v[1][0]=v[2][1]=v[3][2]=1;
14  }
15 }
16 Mat friend operator * (const Mat &A,const Mat &B){   //矩阵相乘
17  Mat C(0);
18  int i,j,k;
19  for (i=0;i<4;i++){ 
20   for (j=0;j<4;j++) {
21    for (k=0;k<4;k++)
22     C.v[i][j]=(C.v[i][j]+A.v[i][k]*B.v[k][j]%MOD)%MOD;
23    if (C.v[i][j]<0) C.v[i][j]+=MOD;
24   }
25  }
26  return C;
27 }
28};
29void solve() {
30 int ans;
31 Mat V(1),B(2);
32 while (n) {
33  if (n&1) V=V*B; //奇数
34  n>>=1;          //除以2
35  B=B*B;   
36 }
37 ans=11*V.v[3][0]+5*V.v[3][1]+V.v[3][2]+V.v[3][3];
38 ans%=MOD;
39 printf("%d\n",ans);
40}
41int main(){
42 while (scanf("%d%d",&n,&MOD)!=EOF && (n+MOD))
43  solve();
44 return 0;
45}