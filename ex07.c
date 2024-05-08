#include <stdio.h>

int main()
{
    int b=0;   //Per far inserire all'utente una serie di numeri (100 in questo caso)
    int num2[100];

    while (b<100)
    {
        printf("inserisci numero\n");
        scanf("%d", &num2[b]);

        b=b+1;
    }
}