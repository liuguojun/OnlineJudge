#include <stdio.h>

int  main()
{
    int test;
    scanf("%d", &test);

    int s[50010] = {0};
    int start[50010] = {0};
    int reverse[50010] = {0};


    
    while( test-- )
    {
        int num;
        scanf("%d", &num);

        for( int i = 0; i < num; i++)
            scanf( "%d", s + i);

        start[0] = s[0];
        reverse[num-1] = s[num-1];

        for( int i = 1; i < num; i++)
        {
            if( start[i-1] > 0 )
                start[i] = start[i-1] + s[i];
            else start[i] = s[i];

            if( reverse[num-i] > 0)
                reverse[num-1-i] = reverse[num-i] + s[num-1-i];
            else reverse[num-1-i] = s[num-1-i];
        }

        int max = 0;
        for( int i = 0; i < num; i++)
        {
            int j,k;
            int max1=0;
            int max2=0;
            for(j=0;j<=i;j++)
                if(max1<start[j])
                    max1=start[j];
            for(k=i+1;k<num;k++)
                if(max2<reverse[k])
                    max2=reverse[k];

            if( max < max1+max2)
                max = max1+max2;
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









