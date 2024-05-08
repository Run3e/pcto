  #include <stdio.h>

  int main()
  {

    int choice;

    char nomeutente[50];
    printf("Inserire nome ");
    scanf("%s", nomeutente);
    printf("Benvenuto %s. \n", nomeutente);
    printf("Sono le 16 e sei appena uscito da scuola, siccome abiti lontano e hai una stazione vicino scuola decidi di aspettare lì il treno");
    printf("Cosa fai?\n1) Aspetti il treno\n2) Chiami i tuoi genitori (Scrivere il numero della scelta)");
    scanf("%d", &choice);
    
    if(choice<=1)
    {
      printf("Raggiungi la stazione e ti siedi su una panchina");
    }
    else
    {
      printf("Nonostante lasci squillare il telefono a lungo non risponde nessuno...\nDecidi quindi di rassegnarti e aspettare il treno");
    }
  }