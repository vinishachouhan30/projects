#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    struct Marks
    {
        float marks;
    } m;
};
  int main()
  {
      struct student s={102,"siya",87.6};
      
      printf("student details:\n");
      printf("%d\n %s\n",s.roll,s.name);
      printf("%f",s.m.marks);
  }