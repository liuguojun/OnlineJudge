#include <stdio.h>
#include <stdlib.h>

struct M
{
    int x;
    int y;
}monkey[50001];

struct K
{
    int x;
    int y;
    int flag;
};

int cmp(const void *p, const void *q)
{
    M *m = (M *)p;
    M *n = (M *)q;
    if( m->x != n->x)
        return m->x - n->x;
    else return m->y - n->y;

}
int main()
{
    int n;
    while( scanf("%d", &n) != EOF)
    {
        if( n == 0 )
            break;

        struct K king[50000];

        int sum_king = 0;
        int i,j;

        for(i=0; i<n; i++)
        {
            scanf("%d%d", &monkey[i].x, &monkey[i].y);
        }
        qsort(monkey, n, sizeof(monkey[0]), cmp);

        for(i=n-1; i>=0; i--)
        {
            int x = monkey[i].x;
            int y = monkey[i].y;
            // find king or not
            bool flag = false;

            bool flag1 = true;

            //has duplicate or not
         //   bool dup = false;

            if(sum_king == 0)
            {
                king[sum_king].x = x;
                king[sum_king].y = y;
                king[sum_king].flag = 1;
                sum_king++;
                continue;
            }

            //else
            for(j=0; j<sum_king; j++)
            {
                if(king[j].flag && x>=king[j].x  && y >= king[j].y)
                {
                    if(!flag)
                    {
                        flag = true;
                     //   dup = false;
                        king[j].x = x;
                        king[j].y = y;

                    }
                    else {
                        king[j].flag = 0;
                    }
                }
                if(king[j].flag && !(x<=king[j].x  && y <= king[j].y))
                    flag1 = false;

            }

            // a  new king
            if( !flag && !flag1 )
            {
                king[sum_king].x = x;
                king[sum_king].y = y;
                king[sum_king].flag = 1;
                sum_king++;

            }
        }
        j = 0;
        for(i=0; i<sum_king; i++)
            if(king[i].flag == 1)
                j++;

        printf("%d\n", j);
    }
    return 0;
}






