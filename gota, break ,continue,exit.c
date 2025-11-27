#include<stdio.h>
#include<conio.h>
int maim()
{
    int i;
    //gota statement
    printf("Gota statement:\n");
    i = 0;
    start:
    printf("%d\n", i);
    i++;
    if (i < 5)
   {
      goto start;
   }
      //break statement
      printf("\n break statement: \n");
      for ( i = 0; i < 10; i++)
    {
       if (i == 5)
     {
        break;
     }
        printf("%d\n", i);
    }
      //continue statement
      printf("\ncontinue statement:\n");
      for ( i = 0; i < 10; i++)
      {
        if (1 == 5)
        {
            continue;
        }
          printf("%d\n", i);
      }
        //exit statement
        printf("\nexit statement:\n");
        for ( i = 0; i < 10; i++)
        {
            if ( i == 5)
            {
                printf("exiting the program...\n");
             exit(0);
            }
              printf("%d\n", i);
        }
           return 0;
}