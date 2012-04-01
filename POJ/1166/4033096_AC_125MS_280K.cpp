#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
const int cmd[9][9] = {  
	{1, 1, 0, 1, 1, 0, 0, 0, 0},
	{1, 1, 1, 0, 0, 0, 0, 0, 0},
	{0, 1, 1, 0, 1, 1, 0, 0, 0},
	{1, 0, 0, 1, 0, 0, 1, 0, 0},//
	{0, 1, 0, 1, 1, 1, 0, 1, 0},//
	{0, 0, 1, 0, 0, 1, 0, 0, 1},
	{0, 0, 0, 1, 1, 0, 1, 1, 0},
	{0, 0, 0, 0, 0, 0, 1, 1, 1},//
	{0, 0, 0, 0, 1, 1, 0, 1, 1}//
};
int x[9], a[9];
bool ok()
{
	int tmp[9];
	for(int i = 0; i < 9; i++)
		tmp[i] = a[i];
	for(int j = 0; j < 9; j++)
		for(int i = 0; i < 9; i++)
			tmp[j] = (tmp[j] + cmd[i][j] * x[i]) % 4;
	for(int i = 0; i < 9; i++)
		if(tmp[i] != 0)
			return 0;
	return 1;
}
void print()
{
	for(int i = 0; i < 9; i++)
		for(int j = 0; j < x[i]; j++)
			printf("%d ", i + 1);
	printf("\n");
		
}
int main()
{
	for(int i = 0; i < 9; i++)
		cin >> a[i];
	memset(x, -1, sizeof(x));
	int k = 0;
	while(k >= 0)
	{
		x[k] += 1;       
		if(x[k] <= 3)
		{
			if(k == 8 && ok())
			{
				print();
			        break;
			}
			else if(k < 8)
				k++;
		}
		else
		{
			x[k] = -1;
			k--;
		}
	}
	return 0;
}

