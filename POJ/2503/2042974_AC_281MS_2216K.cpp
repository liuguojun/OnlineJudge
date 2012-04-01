#include<iostream>
#include<cstring>
using namespace std;
typedef struct str{
char s1[11];
char s2[11];
}str,*stri;
str s[100001];
int cmp(const void *a,const void *b){
return strcmp( ((str *)a)->s2 , ((str *)b)->s2 );
}
int compare(const void *a,const void *b){
return strcmp((char*)a,((str*)b)->s2);
}
int main(){
int n=0;
char tt[25];
while(1){

gets(tt);
if(strlen(tt)==0)break;
int i=0,j=0;
for(;tt[i]!=' ';i++)s[n].s1[i]=tt[i];
s[n].s1[i]='\0';
for(i++;tt[i]!='\0';i++,j++)s[n].s2[j]=tt[i];
s[n].s2[j]='\0';
n++;
}
qsort(s,n,sizeof(str),cmp);
while(scanf("%s",tt)!=EOF){
str * pItem;
pItem = (str *)bsearch (tt, s, n, sizeof (str), compare);
if(pItem!=NULL)
puts(pItem->s1);
else printf("eh\n");
}
return 0;
}
