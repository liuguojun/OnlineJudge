// Author: Guojun Liu
// Date: 2012/04/23 14:58

#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_OP = 100;

int black[6][6] = {0};
int white[6][6] = {0};

int solve(int type)
{
  int i, j, k, total=0, min=MAX_OP;
  int tmp[6][6] ={0};

  for (k=0; k<16; ++k) {
    total = 0;

    for (i=1; i<5; ++i)
      for (j=1; j<5; ++j)
        if(type==1)
          tmp[i][j] = black[i][j];
        else
          tmp[i][j] = white[i][j];

    for (i=1; i<5; ++i) {
      if (k & (1<<(i-1))) {
        tmp[1][i] = 1-tmp[1][i];
        tmp[2][i] = 1-tmp[2][i];
        tmp[1][i-1] = 1-tmp[1][i-1];
        tmp[1][i+1] = 1-tmp[1][i+1];
        
        ++total;
      }
    }

    for (i=2; i<5; ++i) {
      for (j=1; j<5; ++j) {
        if (tmp[i-1][j]!=type) {
          tmp[i][j] = 1-tmp[i][j];
          tmp[i+1][j] = 1-tmp[i+1][j];
          tmp[i-1][j] = 1-tmp[i-1][j];
          tmp[i][j+1] = 1-tmp[i][j+1];
          tmp[i][j-1] = 1-tmp[i][j-1];
          
          ++total;
        }
      }
    }

    for (i=1;i<5;i++)
      if (tmp[4][i]!=type)
        total = MAX_OP;

    if(min > total)
        min = total;
  }
  return min;
}

int main()
{
  int i, j;
  char c;
  for (i=1; i<5; ++i) {
    for (j=1; j<5; ++j) {
      cin >> c;
      if (c=='w')
        black[i][j] = 1;
      else
        black[i][j] = 0;

      white[i][j] = black[i][j];
    }
  }

  int black_max = solve(1);
  int white_max = solve(0);

  if (black_max==MAX_OP && white_max==MAX_OP) {
    cout << "Impossible" << endl;
  } else {
    cout << min(black_max, white_max) << endl;
  }
  return 0;
}

