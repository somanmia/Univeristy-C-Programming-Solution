#include<stdio.h>
int main(){
  int x,y;
  printf("Enter X: ");
  scanf("%d",&x);
  y=x%10;
  if(y%2==0 && x>20){
    printf("Yes\n");
}else{
     printf("No\n");
  }
  return 0;
}
