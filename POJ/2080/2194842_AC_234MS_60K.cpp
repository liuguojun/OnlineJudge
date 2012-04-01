#include <stdio.h> 
void main() { 
    int m1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int m2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    char week[7][10]={"Saturday","Sunday","Monday",
           "Tuesday","Wednesday","Thursday","Friday"};
    int days, weekday; 
    scanf("%d",&days); 
while(days != -1){ 
          days++; 
          weekday = (days-1)%7; //2000年1月1日是星期六
          int daysinyear=0; 
          int ithyear=0; 
          while(days > 0){ 
               if(ithyear%100==0 
			&& ithyear%400 != 0) daysinyear=365; 
               else if(ithyear%4==0) daysinyear = 366; 
               else daysinyear = 365; 
               days -= daysinyear; 
               ithyear ++; 
          } 
          ithyear --; 
          days += daysinyear;  
int ithmonth=0; 
     while(days > 0){ 
            if(daysinyear == 365) days -= m1[ithmonth];
            else days -= m2[ithmonth]; 
            ithmonth ++; 
     } 
     if(daysinyear == 365) days += m1[ithmonth-1]; 
     else days += m2[ithmonth-1]; 
     printf("%d-%02d-%02d %s\n",
            2000+ithyear,ithmonth,days,week[weekday]);
     scanf("%d",&days); 
  } // while
} // main


