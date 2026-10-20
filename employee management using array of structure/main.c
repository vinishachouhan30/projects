#include<stdio.h>
 struct employee
 {
     int id;
     char name[25];
     float salary;
 };
    int main()
    {
        struct employee e[3] = { {1001,"riya",20000}, {1002,"raj",40000}, {1003,"aman",60000} };
        
        printf("employee details:\n");
        printf("%d %s %f\n",e[0].id,e[0].name,e[0].salary);
        printf("%d %s %f\n",e[1].id,e[1].name,e[1].salary);
        printf("%d %s %f\n",e[2].id,e[2].name,e[2].salary);
        
    }