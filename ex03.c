#include <stdio.h>

int main()
{
    int a;

    printf("Quanti anni hai?\n");
    scanf("%d", &a);

    if (a > 18)
    {
        if (a > 120)
      {
        printf ("Sii serio\n");
      }
      
      else
      {
        printf ("Sei maggiorenne\n");
      }
    
      

    }
    else
    {
        if (a < 1)
        {
            printf ("...?\n");
        }

        else
        {
            printf ("Non sei maggiorenne\n");
        }
    }
}  