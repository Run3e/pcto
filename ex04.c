#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Inserisci i numeri\n");
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a + b > c && b + c > a && a + c > b)
    {
        printf("Può essere un triangolo\n");

        if(a == b && b == c)
         {
            printf("Triangolo equilatero\n");
         }

        else if(a == b || b == c || c == a)
        {
            printf("Triangolo isoscele\n");
        }
        
        else 
        {
            printf("Triangolo scaleno\n");
        } 
    }
    
    else
    {
        printf("Non può essere un triangolo\n");
    }
}