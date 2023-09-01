#include<stdio.h>
int main(){
  int N,M;
  scanf("%d %d",&N,&M);
  if(N%2==0 && N>M){
    printf("Yes\n");
  }else{
  printf("NO\n");
  }
  return 0;
}
