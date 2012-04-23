// Author: Guojun Liu
// Date: 2012/04/23 22:43

#include <stdio.h>
#include <limits.h>

#define MAX(x, y)  x>y?x:y

int array[50010] = {0};
int max_from_left[50010] = {0};
int max_from_right[50010] = {0};

int main()
{
      int T;
      scanf("%d", &T);

      while (T--) {

        int N;
        scanf("%d", &N);

        int i, j;
        for (i=0; i<N; i++)
          scanf("%d", array+i);

        max_from_left[0] = array[0];
        max_from_right[N-1] = array[N-1];

        for (i=1; i<N; i++)
          if (max_from_left[i-1]<0)
            max_from_left[i] = array[i];
          else
            max_from_left[i] = max_from_left[i-1]+array[i];

        for (i=1; i<N; i++)
          max_from_left[i] = MAX(max_from_left[i], max_from_left[i-1]);

        for (i=N-2; i>=0; i--)
          if (max_from_right[i+1]<0)
            max_from_right[i] = array[i];
          else
            max_from_right[i] = max_from_right[i+1]+array[i];

        for (i=N-2; i>=0; i--)
          max_from_right[i] = MAX(max_from_right[i], max_from_right[i+1]);

        int min=INT_MIN;
        int sum = 0;
                for (i=0; i<N-1; i++) {
                  sum = max_from_left[i] + max_from_right[i+1];

                  if (sum>min)
                    min = sum;
                }
                printf("%d\n", min);
      }
      return 0;
}
