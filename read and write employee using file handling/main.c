#include<stdio.h>

 struct Employee {
    int id;
    char name[20];
    float salary;
};
  int main(){
  FILE *fp;
  struct Employee e1={202,"isha",25000};
  struct Employee e2;
  
  fp = fopen("employee.dat","wb");
  fwrite(&e1,sizeof(e1),1,fp);
  fclose(fp);
  
   fp = fopen("employee.dat","rb");
   fread(&e2,sizeof(e2),1,fp);
   
   printf("Employee id:%d\n",e2.id);
   printf("Employee name:%s\n",e2.name);
   printf("Employee salary:%f\n,e2.salary");
  
   fclose(fp);
 }