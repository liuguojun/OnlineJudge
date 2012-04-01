#include <stdio.h>

int  main()
{
    int test;
    scanf("%d", &test);

    


    
    while( test-- )
    {
        int s[50010] = {0};
        int start[50010] = {0};
        int max_s[50010]={0};
        int reverse[50010] = {0};
        int max_r[50010]={0};

        int num;
        scanf("%d", &num);

        for( int i = 0; i < num; i++)
            scanf( "%d", s + i);

        start[0] = s[0];
        max_s[0]=start[0];
        reverse[num-1] = s[num-1];
        max_r[num-1] = reverse[num-1];

        for( int i = 1; i < num; i++)
        {
            if( start[i-1] > 0 )
                start[i] = start[i-1] + s[i];
            else start[i] = s[i];

            max_s[i] = start[i]>max_s[i-1]?start[i]:max_s[i-1];

            if( reverse[num-i] > 0)
                reverse[num-1-i] = reverse[num-i] + s[num-1-i];
            else reverse[num-1-i] = s[num-1-i];

             max_r[num-1-i] = reverse[num-1-i]>max_r[num-i]?reverse[num-1-i]:max_r[num-i];
        }

        int max = -9999999999999999;
        for( int i = 0; i < num-1; i++)
        {
           if(max<max_s[i]+max_r[i+1])
               max = max_s[i]+max_r[i+1];
        }
         /*for( int i = 0; i < num; i++)
             printf("%d", start[i]);
         printf("\n");
         for( int i = 0; i < num; i++)
             printf("%d", reverse[i]);
         printf("\n");*/

        
        printf("%d\n", max);
    }
    return 0;
}









