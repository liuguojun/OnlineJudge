#include  < iostream > 
 using   namespace  std;

 int  p[ 301 ][ 301 ];
 int  q[ 301 ][ 31 ];
 int  a[ 301 ];

 int  main()
  {
     int  V, P;
     int  i, j, k, l;
     int  t[ 301 ];
     int  tmp;
    scanf( " %d%d " ,  & V,  & P);
    
     for  (i = 1 ; i <= V; i ++ )
        scanf( " %d " ,  & a[i]);
    
     for  (i = 1 ; i <= V; i ++ )
         for  (j = i; j <= V; j ++ )
          {
             if  (i  ==  j)
                p[i][j]  =   0 ;
             else 
               {
                l  =  (i  +  j)  /   2 ;
                p[i][j]  =   0 ;
                 for  (k = i; k <= l; k ++ )
                    p[i][j]  +=  a[l]  -  a[k];
                 for  (k = l + 1 ; k <= j; k ++ )
                    p[i][j]  +=  a[k]  -  a[l];
               
            } 
        } 
        
    memset(q,  0 ,  sizeof (q));
     for  (i = 1 ; i <= V; i ++ )
         for  (j = 1 ; j <= P; j ++ )
          {
             if  (j  ==   1 )
                q[i][j]  =  p[ 1 ][i];
             else 
               {
                 if  (i  >=  j)
                  {
                    q[i][j]  =  q[j - 1 ][j - 1 ]  +  p[j][i];
                     for  (k = j; k < i; k ++ )
                      {
                         if  (q[i][j]  >  q[k][j - 1 ]  +  p[k + 1 ][i])
                            q[i][j]  =  q[k][j - 1 ]  +  p[k + 1 ][i];
                    } 
                } 
            } 
        } 
        
    cout  <<  q[V][P]  <<  endl;
    system( " pause " );
     return   0 ;
} 
