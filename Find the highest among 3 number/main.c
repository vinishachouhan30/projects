#include<stdio.h>
int main()
{
  int a,b,c;
 printf("Enter three number a,b,c");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b)
 { 
   if(a>c) 
{
  printf("a is highest");
  }  
   else
 {
   printf("C");
   }        
   } 
   else
   if(b>c)
{ 
  printf("b is highest"); 
  } 
  else
  {
    printf("c");
    }              
  return 0;  
  }