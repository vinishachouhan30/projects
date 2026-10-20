#include <stdio.h>
struct employee
{
    int id;
    char name[20];
    struct Salary
    {
        float salary;
    } s;
};
  int main()
  {
      struct employee e[2]= {{12,"siya",80000},{13,"raman",60000}};
      
      printf("employee details:\n");
      printf("%d %s %f\n",e[0].id,e[0].name,e[1].s.salary);
      printf("%d %s %f\n", e[1].id,e[1].name,e[1].s.salary);
  }
