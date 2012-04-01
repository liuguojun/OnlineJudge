#include <iostream.h>

#define MAX 22
char rect[MAX][MAX];
int walkFrom(int currentRow, int currentCol);

void main(){
  int col,row;
  cin >> col >> row;
  while(col!=0 && row !=0){
      int i,j,startRow,startCol;
	  
	  // intialize
	  for(i=0;i<MAX;i++) 
		  for(j=0;j<MAX;j++) 
			  rect[i][j]='#';
      
	  // read in
      for(i=1;i<=row;i++)
	  for(j=1;j<=col;j++){
			  cin >> rect[i][j];
			  if(rect[i][j] == '@'){
				  startRow = i;
				  startCol = j;
			  }
	  }
	  cout << walkFrom(startRow,startCol) << endl;  
      cin >> col >> row;
  }
}
int walkFrom(int currentRow, int currentCol){
  if(rect[currentRow][currentCol] == '#') return 0;
  rect[currentRow][currentCol] = '#';
  return 1+walkFrom(currentRow+1,currentCol) 
          +walkFrom(currentRow-1,currentCol) 
          +walkFrom(currentRow,currentCol+1) 
          +walkFrom(currentRow,currentCol-1) ;
}

