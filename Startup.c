#include <stdio.h>
#include <unistd.h>

int main()
    {
        char nomeutente[50];
        char classe[50];
        char sede[100];
        int choice;
        char materia[50];
        float media;
        char materiaa[50];
    

        printf("Benvenuto nel tutormatch dell'Istituto Tommaso Salvini!\n");
        sleep(2);
        printf("Inserisci il tuo nome e cognome: \n");
        scanf(" %[^\n]s", nomeutente);
        printf("Ciao %s! \n", nomeutente);
        sleep(1);
        printf("Inserisci la tua sede: \n");
        scanf(" %[^\n]s", sede);
        sleep(1);
        printf("Inserisci la tua classe: \n");
        scanf(" %[^\n]s", classe);
        sleep(1);
        printf("Selezionare:\n1) Desidero essere un tutor\n2) Desidero ricevere ripetizioni\n");
        scanf(" %d", &choice);

        if(choice<=1)
        {
            printf("Molto bene! quale materia desideri insegnare?\n");
            scanf(" %[^\n]s", materia);
            printf("qual'è la tua media in %s? \n", materia);
            scanf(" %fl", &media);
            if(media>=8)
            {
                sleep(1);
                printf("Registrazione completata!\nSei pronto per il tuo ruolo di tutor!\n");
                sleep(1);
                printf("Sei stato inserito nel sistema, ora non ti resta che attendere una richiesta\n");
            }
            else
            {
                sleep(1);
                printf("Purtroppo non risulti qualficato per il ruolo di tutor.\n");
            }
        }
        else
        {
            printf("In quale materia hai bisogno di ripetizioni?\n");
            scanf(" %[^\n]s", materiaa);
            sleep(1);
            printf("Eccellente. Sei pronto per entrare in tutormatch\n\n");
            sleep(1);
            printf("Benvenuto in tutormatch! Eccoti una lista di tutor per %s \n", materiaa);
            sleep(1);
            printf("1) Luca Barone\n2) Elena Ferrari\n3) Elia Torregrossa\n4) Lavinia Sartori\n5) Noemi Cusinato\n\n");
            scanf(" %d", &choice);

            if(choice==1)
            {
                sleep(1);
                printf("LUCA BARONE\nClasse: 4D\nMedia: 8.2\nSpecializzato in: Materie scientifiche\n");
            }
            else if(choice==2)
            {
                sleep(1);
                printf("ELENA FERRARI\nClasse: 3G\nMedia: 8.8\nSpecializzata in: Materie umanistiche\n");
            }
            else if(choice==3)
            {
                sleep(1);
                printf("ELIA TERRAGROSSA\nClasse: 5F\nMedia: 8.4\nSpecializzato in: Lingue straniere");
            }
            else if(choice==4)
            {
                sleep(1);
                printf("LAVINIA SARTORI\nClasse: 2C\nMedia: 8.6\nSpecializzata in: Materie umanistiche");
            }
            else if(choice==5)
            {
                sleep(1);
                printf("NOEMI CUSINATO\nClasse: 3Q\nMedia: 8.3\nSpecializzata in: Materie scientifiche");
            }
            
        }
    }