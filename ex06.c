#include <stdio.h>

int main()
{
    int b;
    int a;
    int c = 0;
   
    printf("Inserisci un numero\n");
    scanf("%d", &b);

    a = b - 1;

    while(a > 1) //Finchè a > 1
    {
        if(b % a == 0)
        {
            c = c + 1;
        }
        a = a - 1;
    }

    if(c == 0)
    {
        printf("Numero primo\n");
    }
    
    else
    {
        printf("Numero non primo\n");
    }
}