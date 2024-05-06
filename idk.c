#include <stdio.h>

int main()
{
        //VARIABILI//

        int a; //NUMERI INTERI
        float b; //NUMERI CON LA VIRGOLA (MAX 6 CIFRE)
        double c; //NUMERI CON LA VIRGOLA (MAX 15 CIFRE)

        a = 68;
        b = 2.156;
        c = 2.6156;

printf ("a: %d\n", a); //IDENTIFICATORE PER INT: %d
printf ("b: %f\n", b);
printf ("c: %lf\n", c);
printf ("a+10: %d\n", a + 10);
printf ("a-b %f\n", a - b);
printf ("a*b %f\n", a * b);
printf ("a/b %f\n", a / b);
printf ("a*c %fl\n", a * c);
}