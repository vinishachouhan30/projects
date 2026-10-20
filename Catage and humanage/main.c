    # include<stdio.h>
    int main()
   {
    int catAge;
    float humanAge;
    printf ("Enter catAge: ");
    scanf("%d",&catAge);
    if(catAge<=2)
    humanAge=catAge*12.5;
    else 
    humanAge=25+(catAge-2)*4;
   printf("humanAge=%f",humanAge);
    return 0;
   }