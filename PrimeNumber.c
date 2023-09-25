#include<stdio.h>

int main(){
int n,i,ck;
scanf("%d",&n);
for(int j=2;j<=n;j++){
        ck=0;

for(i=2;i<=sqrt(j);i++){
    if(j%i==0){
        ck++;
      break;
    }
}
if(ck==0){
    printf("%d ",j);
}
}
printf("\n");
return 0;}
