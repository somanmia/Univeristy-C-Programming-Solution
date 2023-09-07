#include<stdio.h>
int main(){
 int i, start,end,mul=1;
 scanf("%d %d",&start,&end);
 for(i=start;i<=end;i++){
   mul*=i;
 if(i!=end){
    printf("%d * ",i);
 }else{
 printf("%d ",i);}

 }
printf("=%d\n",mul);
return 0;
}
