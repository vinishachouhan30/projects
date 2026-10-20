#include <stdio.h>
struct student
{
    int roll;
    char name[6];
    float marks;
};
   int main()
   {
       struct student s[2]={ 
           {1,"aditi",90.0},{2,"aryan",87.0}
       };
   
      printf("student details:\n");
          
          printf("%d %s %f\n",s[0].roll,s[0].name,s[0].marks);
          printf("%d %s %f\n",s[1].roll,s[1].name,s[1].marks);
   }