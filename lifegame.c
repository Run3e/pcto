#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <windows.h>
    #define SLEEP(x) Sleep(x * 1000)
#else
    #include <unistd.h>
    #define SLEEP(x) sleep(x)
#endif

int main()
{
  int choice;
  char nomeutente[50];

  printf("Benvanuto nel gioco della vita. Come preferisci essere chiamato?\n");
  scanf("%[^\n]s", nomeutente);
  sleep(1);
  printf("Molto bene %s, è il momento di nascere!\n", nomeutente);
  sleep(2);
  printf("Ora stai crescendo. scegli come vuoi proseguire utilizzando i tasti '1' o '2'\n");
  sleep(1);
  printf("1) Corri\n2) Fai le elementari\n");
  scanf("%d", &choice);
  sleep(1);

  
  if(choice<=1)
  {
    system("clear");
    sleep(1);
    printf("Come desideri procedere?\n");
    sleep(2);
    printf("1) Pampers baby dry🤭\n2) Salti dentro un vulcano\n");
    scanf("%d", &choice);
    
    if(choice<=1)
    {
        system("clear");
        sleep(1);
        printf("hahaha fine del gioco per te piccolo burlone!\n");
    }
    else
    {
        system("clear");
        sleep(1);
        printf("Undertale reference!...\n");
        sleep(2);
        printf("Sei morto btw...\n");
        sleep(1);
    }
  }
  else
  {
    system("clear");
    sleep(1);
    printf("Fai le medie...\n\n");
    sleep(2);
    printf("E' ora di scegliere un liceo!\n\n");
    sleep(1);
    printf("1) Liceo scientifico\n2) Liceo classico\n3) Istituto tecnico agrario\n4) Liceo artistico\n5) Areonautico\n6) Alberghiero\n7) Liceo linguistico\n8) Nautico\n");
    scanf("%d", &choice);

    if(choice=1)
    {
      system("clear");
      sleep(1);
      printf("Molto bene! Hai scelto il liceo scientifico!!\n\n");
      sleep(2);
      printf("Ora scegli il tuo indirizzo\n\n");
      sleep(1);
      printf("1) Internazionale\n2) Matematico\n3) Scienze applicate\n4) Sportivo\n5) Tradizionale\n6) Quadriennale\n7) Musicale\n");
      scanf("%d", &choice);

      if(choice<=1)
      {
        system("clear");
        sleep(1);
        printf("Congratulazioni! Hai scelto il liceo scientifico internazionale!!\n\n");
        sleep(2);
        printf("Spero tu sia felice della tua scelta...\n");
        sleep(2);
        printf("...perchè non potrai modificarla\n\n");
        sleep(2);
        system("clear");
        sleep(1);
        printf("Mentre studi ti rendi conto di non capire un caz.\nCosa fai?\n\n");
        sleep(2);
        printf("1) Ti trasferisci in Francia\n2) Continui anche se non sai neanche tu che cavolo stai studiando\n");
        scanf("%d", &choice);

        if(choice<=1)
        {
          system("clear");
          sleep(1);
          printf("oui oui baguette\n\n");
          sleep(1);
          printf("Muori in francese\n");
        }
        else if(choice=2)
        {
          system("clear");
          sleep(1);
          printf("Prendi il diploma\n\n");
          sleep(1);
          printf("Sali sul primo volo diretto allo Yemen\n\n");
          sleep(2);
          printf("Tuttavia l'aereo si schianta perchè qualche imbecille dell'areonautico si è rotto il collo accendendo il motore\n");
        }
      }
      else if(choice=2)
      {
        system("clear");
        sleep(1);
        printf("Complimenti! Hai scelto il liceo scientifico matematico!...");
        sleep(2);
        printf("...esattamente quale trauma hai subito da piccolo?\n\n");
        sleep(2);
        printf("Vabbè. Hai scelto +matematica e -sanità mentale!\n\n");
        sleep(2);
        printf("Dopo anni di intensi studi vai finalmente a fare la maturità. Come va?\n\n");
        sleep(1);
        printf("1) Vieni promosso\n2) Vieni bocciato\n");
        scanf("%d", &choice);

        if(choice<=1)
        {
          system("clear");
          sleep(1);
          printf("Complimenti! ora scegli il tuo lavoro!\n\n");
          sleep(1);
          printf("1) Benzinaio\n2) Impiegato sottopagato del McDonald's\n");
          scanf("%d", &choice);

          if(choice<=1)
          {
            system("clear");
            sleep(1);
            printf("Incontri una bella ragazza e ti innamori della sua macchina\n\n");
            sleep(2);
            printf("Abbandoni il posto di lavoro per seguirla fino a casa\n\n");
            sleep(1);
            printf("La fermi mentre si trova sull'uscio di casa sua e le confessi il tuo amore\nLei cosa fa?\n\n");
            sleep(1);
            printf("1) Accetta il tuo amore\n2) Ti rifiuta\n");
            scanf("%d", &choice);

            if(choice<=1);
            {
              system("clear");
              sleep(1);
              printf("Vi sposate ma dopo 29 anni di matrimonio le confessi che in realtà ti eri innamorato della sua macchina e non di lei.\n\n");
              sleep(2);
              printf("Ti chiede quindi il divorzio e vai a vivere per strada\n\n");
              sleep(2);
              printf("Vieni investito dal pro-pro-pro-pro-pro-pro-pro-pro nipote di Pitagora\n");
            }
            else
            {
              system("clear");
              sleep(1);
              printf("La polizia ti arresta per stalking e muori in prigione\n");
            }

          }
          else if(choice=2)
          {
            system("clear");
            sleep(1);
            printf("Provi a calcolare la parabola necessaria per tirare il panino ad un cliente ma sbagli e gli arriva in faccia\n\n");
            sleep(2);
            printf("Ti licenziano e muori di cancro al piano cartesiano\n");
          }
        }
        else if(choice=2)
        {
          system("clear");
          sleep(1);
          printf("Muori perchè non sei riuscito a calcolare il gradiente della gamba del figlio del prof\n");
        }
      }
  }
  }