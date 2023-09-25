#include<stdio.h>
int main(){
  int day,year,month;
  printf("Enter Total Days: ");
  scanf("%d",&day);
  year=day/365;
  month=(day%365)/30;
  day=day-((year*365)+(month*30));
  printf("%d Years , %d Month  , %d Days",year,month,day);
return 0;}
