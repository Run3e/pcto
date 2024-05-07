#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Quale numero desideri verificare?\n");
    scanf("%d", &b);

    if(b % a == 0)
    {
        while(a == b + 1)
        printf("Numero primo");
    }

    else if (b % a == 1)
    {
        printf("Numero non primo");
    }
}