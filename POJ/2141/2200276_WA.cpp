#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
   char str1[27],str2[85];
   cin.getline(str1,27);
   cin.getline(str2,85);
   int i;
   str2[0]=toupper(str1[tolower(str2[0])-'a']);
   for(i=1;str2[i]!=0;i++)
	   str2[i]=str1[str2[i]-'a'];
   str2[i]=0;
   cout<<str2<<endl;
      return 0;	 	
}

