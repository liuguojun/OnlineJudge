#include<iostream>
using namespace std; 

int main()
{
    int a[5]={0,45,9045,1395495,189414495};
    int b[5]={0,9,189,2889,38889};
    int c[5]={0,10,100,1000,10000};
    int d[5]={1,10,100,1000,10000};
    unsigned long i,j,k,n,t;
    cin>>t;while(t--)
    {
        cin>>n;
        for(i=1;i<5;i++)
        if(n<=a[i])break;                 //所在的行数为 i位数
        n-=a[i-1];
        for(k=0,j=1;k<n;j++)
            k=b[i-1]*j+i*j*(j+1)/2;       //得到该i-1位的数中排列第一个超过序号n的第j个数(例如：2位数，第j个数是11+j 
        --j;                              //n号就是落在前面的数10+j 
        n=n-b[i-1]*(j-1)-i*j*(j-1)/2;     //在该数中寻找最终的位置 
        for(i=1;i<5;i++)
        if(n<=b[i])break;                
        if(i==1)cout<<n<<endl;
        else                              //求得在该数的一排中 最后更新了的序号n对应的数字
        {
            n-=b[i-1];                  
            k=(n-1)/i+c[i-1];          
            cout<<k/d[i-(n-1)%i-1]%10<<endl;
        }
    }    
    return 0;
}