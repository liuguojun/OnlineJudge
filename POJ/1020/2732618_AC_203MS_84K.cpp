#include<stdio.h>
#include<stdlib.h>
#define maxlong 41
int cake[maxlong][maxlong];
int n,size;
int small[17];
int use[17];
int ok;
int cmp(const void *a,const void *b)
 {
	 return *(int *)b-*(int *)a;
	 }

int searchfirst()   //寻找第一个没有被切的小块，这个地方应该还能优化
 {
	  int i,j,temp=1;
	 for(i=1;i<=size;i++)
	  for(j=1;j<=size;j++)
	    {if(cake[i][j]==1)
	     ++temp;
	    else return temp;}
	    return temp; 
	 }

int valid(int i,int j)   //判断是否越界 
 {
	
    if((i>=1&&i<=size)&&(j>=1&&j<=size))
      return 1;
      else return 0; 
	 }	
	  
int check(int a,int b,int c)   //判断当前小块是否可以被切 
 {
	    int i,j;
	  if(valid(a+small[c]-1,b+small[c]-1)==0)
	      return 0;
	  for(i=a;i<=a+small[c]-1;i++)
	    for(j=b;j<=b+small[c]-1;j++)
	      if(cake[i][j]==1)
	        return 0;
	     return 1;   
	     
	 }
	 
void changecake(int indexx,int indexy,int c) //切下小块 
   {
	     int i,j;
	   for(i=indexx;i<=indexx+small[c]-1;i++)
	    for(j=indexy;j<=indexy+small[c]-1;j++)
	      cake[i][j]=1;
	   }  
	   	 	 
void huanyuan(int indexx,int indexy,int c)    //还原蛋糕 
  {
	    int i,j;
	   for(i=indexx;i<=indexx+small[c]-1;i++)
	    for(j=indexy;j<=indexy+small[c]-1;j++)
	      cake[i][j]=0;
	  }

int checkok()   //测试是否已经切完 
  {
     int i;
     for(i=1;i<=n;i++)
       if(use[i]==0)
         return 0;
       return 1;         
            }	 
void put()    //切蛋糕 
   {
	   int i,count,indexx,indexy,past=0;//past是关键的参数，当某个位置用past大小切过但失败了，
	   if(ok==1) return;                   //下一次这个位置就不能再用past大小的小块来切 
	   
	   count=searchfirst();
	   
	    indexy=count%size;
	    if(indexy==0) indexy=size;
	    
	   if(count%size==0) 
	    indexx=count/size;
	   else indexx=count/size+1; 
	    
	    for(i=1;i<=n;i++)
	     {
		     if(past==small[i]) continue;
		       
		    if(use[i]==0)
		      {
			    if(check(indexx,indexy,i)==1)
			      {   use[i]=1;
				      changecake(indexx,indexy,i);
				      put();
				        if(ok==1) return; 
                      if(checkok()==1) {ok=1;return;} 
				      use[i]=0;
				       huanyuan(indexx,indexy,i);
				      past=small[i];
				    }
			    }
			}        
			     
	   } 
int main()
 {   int i,j,t,temp;
	 scanf("%d",&t);
	 while(t--)
	  {
		  scanf("%d%d",&size,&n);
		  temp=0;
		   ok=0;
		 for(i=1;i<=size;i++)
		  for(j=1;j<=size;j++) 
		   cake[i][j]=0;
		  
		  for(i=1;i<=n;i++)
		   {
			   use[i]=0;
			   scanf("%d",&small[i]);
			   temp+=small[i]*small[i];
			 }
			 
			if(temp!=size*size)
			 {printf("HUTUTU!\n");continue;}
			 
			 qsort(small+1,n,sizeof(small[0]),cmp);
                            //从最大的开始切，没有这个优化也会超时
			 
		  put();	   //切蛋糕
		  if(ok==1) printf("KHOOOOB!\n");
		  else printf("HUTUTU!\n"); 
	 }
}	 
