#include<stdio.h>
int main(){
  float salary,basic;
 while(scanf("%f",&basic)!=EOF){
      if(basic<10000){
        salary=basic+basic*50/100;
         printf("Salary : %.2f \n",salary);
      }else if(basic>20000 && basic<3000){
             salary=basic+(basic*45)/100;
              printf("Salary : %.2f \n",salary);
        }
        else if(basic>30000){
            salary=basic+(basic*40)/100;
             printf("Salary : %.2f \n",salary);
        }else{
          printf("Please ,Enter Valid Baisc Salary.\n");
        }

 }


return 0;
}
