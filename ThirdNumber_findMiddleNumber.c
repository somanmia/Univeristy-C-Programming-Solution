#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(y>x && x>z || z>x && x>y){
    printf("Middle Number is: %d\n",x);
}else if(x>y && y>z || z>y && y>x){
    printf("Middle Number is: %d\n",y);
}else  if(x>z && z>y || y>z && z>x){
   printf("Middle Number is: %d\n",z);
}else{
   printf("Please,Enter Again!!\n");
}



    return 0;
}
