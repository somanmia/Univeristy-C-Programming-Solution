#include<stdio.h>

int main(){
int j,n,i,ck;
scanf("%d",&n);

for(j=1;j<=n;j++){
   ck=0;
if(j<=1){
    ck++;
}
for(i=2;i<=sqrt(j);i++){
    if(j%i==0){
        ck++;
      break;
    }
}
if(ck==0){
    printf("%d\n",j);
}

}
return 0;}

