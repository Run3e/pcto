#include <stdio.h>

int main()
{
    int b=0;   //Per far inserire all'utente una serie di numeri (10 in questo caso)
    int num2[10];

    while (b<10)
    {
        printf("inserisci numero\n");
        scanf("%d", &num2[b]);

        b=b+1;
    }

    char nomeutente[50]; //Per far inserire al giocatore il proprio nome
    
    printf("Inserire nome utente\n");
    scanf("%s", nomeutente); //Con le stringe non ci va la &
}