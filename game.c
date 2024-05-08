  #include <stdio.h>
  int main()
  {

    int choice, v; // v è il punteggio
    char nomeutente[50];
    printf("Inserire nome: ");
    scanf("%[^\n]s", nomeutente);
    printf("Benvenuto %s. \n", nomeutente);
  
    printf("Sono le 16 e sei appena uscito da scuola, siccome abiti lontano e hai una stazione vicino scuola decidi di aspettare lì il treno. ");
    printf("Cosa fai?\n1) Aspetti il treno\n2) Chiami i tuoi genitori (Scrivere il numero della scelta)\n");
    scanf("%d", &choice);
    
    if(choice<=1)
    {
      printf("Raggiungi la stazione e ti siedi su una panchina ad aspettare il treno\n");
    }
    
    else
    {
      printf("Nonostante lasci squillare il telefono a lungo non risponde nessuno...\nDecidi quindi di rassegnarti e di raggiungere la stazione.\nTi siedi dunque su una panchina ad aspettare il treno\n");
    }

    printf("Dopo circa un'ora di attesa arriva il trenino ma è realizzi che è pieno di persone. Cosa fai?\n1) Combatti\n2) Aspetti il treno successivo\n3) Provi ad entrare lo stesso\n");
    scanf("%d", &choice);
    if (choice<=1)
    {
      printf("Tiri fuori una spada dal tuo zaino e infilzi qualche passeggero. Entri dunque nel treno ma siccome non stai simpatico a nessuno vieni rispinto fuori\n Decidi perciò di aspettare il prossimo treno\n");
      v = v-1;
    }
    else if (choice==2)
    {
      printf("Aspetti per un'altra mezz'oretta. Alla fine arriva il treno successivo\n");
      v = v+1;
    }
    else
    {
      printf("Provi a farti strada fra le persone ma non riesci ad entrare comunque.\nAspetti dunque il prossimo treno, che passa dopo una mezz'oretta");
    } 
    
    printf("Per fortuna questo treno non è pienissimo e riesci ad entrare.\n Passa un po' di tempo e devi scegliere a quale fermata scendere\n1) Grottarossa\n2) Centro Rai\n3) Labaro\n");
    scanf("%d", &choice);
    if (choice<=1)
    {
      printf("Il treno però non si ferma, anche se hai prenotato la fermata. Finisci perciò a Labaro\n");
      v = v-1; // Fanculo chi sceglie Grottarossa
    }
    else if (choice==2)
    {
      printf("Il treno però non si ferma, anche se hai prenotato la fermata. Finisci perciò a Labaro\n"); // per la neutral basta non mettere v = ...
    }
    else
    {
      printf("Arrivi alla stazione di Labaro senza nessun problema\n");
      v = v+1;
    }
    printf("Appena sceso dal treno realizzi di dover prendere una decisione molto importante: aspetti lo 039 (l'autobus) o no?\n1) Si\n2) No\n");
    scanf("%d", &choice);
    if (choice<=1) // Storyline 039 (scrivi te)
    {
      printf("Ti siedi su un muretto ad aspettare il 39. Dopo circa 2 ore di attesa lo vedi arrivare in lontananza e una lacrima di gioia ti riga il viso\n");
      printf("Il 39 si ferma e apre le porte per lasciarti entrare ma appena ti siedi realizzi di essere da solo sull'autobus.\nL'autista prova a parlare con te, cosa fai?\n1) Rispondi\n2) Fai finta di non aver sentito\n");
      scanf("%d", &choice);
      
      if(choice<=1)
      {
        printf("L'autista apprezza la tua gentilezza e ti racconta la sua storia: lui si chiama Gonzalo e fin da piccolo ha sempre voluto guidare il 39 ma data la sua protesi all'alluce sinistro è sempre stato discriminato.\nFinalmente è riuscito a realizzare il suo sogno\nTi commuovi per la sua storia toccante e Gonzalo ti porta in sicurezza fino alla tua fermata\n");
        v=v+1;
      }
      else
      {
        printf("L'autista blocca il 39 in mezzo alla strada, si alza e ti lega al sedile obbligandoti ad ascoltare la sua storia: Il suo nome è Gonzalo, ha sempre voluto diventare un autista e finalmente ha realizzato il suo sogno.\nTuttavia, siccome lo hanno messo a guidare lo 039 la sua vita è colma di collera e rimorso che sfoga sui suoi passeggeri\nDopo aver finito il suo racconto ti prende e ti tira fuori dall'autobus lasciandoti poco distante dalla fermata a cui dovevi scendere\n");
        v=v-1;
      }
      
      printf("Ti incammini verso casa tua e improvvisamente vedi Gonzalo correre verso di te urlando\nCosa fai?\n1) Corri verso di lui tirando fuori la spada di prima dallo zaino\n2) Rimani fermo dove sei aspettando di parlare con lui e capire il problema\n3) Inizi a scappare\n");
      scanf("%d", &choice);

      if(choice<=1)
      {
        printf("Lo colpisci con la spada e lui cade a terra privo di sensi.\nDunque ti incammini e finalmente riesci ad arrivare sull'atrio di casa tua.\nBussi quindi alla porta\n");
        v=v-1;
      }
      else if(choice==2)
      {
        printf("Mentre aspetti che ti si avvicini lo vedi cadere di faccia per poi smettere di muoversi.\nDunque ti incammini e finalmente riesci ad arrivare sull'atrio di casa tua.\nBussi quindi alla porta\n");
        v=v+1;
      }
      else
      {
        printf("Inizi a correre senza voltarti indietro e raggiungi l'atrio di casa tua.\nBussi quindi alla porta\n");
      }

      printf("Tua madre apre la porta e ti mostra arrabbiata l'orario: sono le 23:32.\nTi chiede come mai hai fatto tutto questo ritardo\n1) Menti\n2) Dì la verità\n3) Inizia a piangere"\n);
      scanf("%d", &choice);
      if(choice<=1)
      {
        printf("Racconti a tua madre di come sei stato trattenuto a scuola dalla professoressa di Arte a cui serviva una mano per ricostruire il David.\nMamma: 'Che cosa stai dicendo?! Vai immediatamente in camera tua %s\n", nomeutente);
        v=v-1;
      }
      else if(choice==2)
      {
        printf("Racconti la verità a tua madre.\nMamma: 'Ok ora però vai in camera %s\n", nomeutente);
        v=v+1;
      }
      else
      {
        printf("Ti metti a piangere di fronte a tua madre.\nMamma: 'Smettila di piangere e vai in camera tua %s\n", nomeutente);
      }

      printf("Dopo essere andato in camera tua e aver atteso circa 15 minuti tua madre ti chiama per la cena.\nSei obbligato ad andare\n");

      if (v<0)
      {
        printf("Appena dopo aver mangiato la cena tua madre ti dice la punizione per essere tornato così tardi e aver detto delle bugie: niente telefono per le successive 5 settimane.\nBAD ENDING\n");
      }

      else if(v=0)
      {
        printf("Mangi la tua cena e te ne vai in camera come se nulla fosse accaduto.\n Non riesci a capire se tua madre sia ancora arrabbiata o no.\nNEUTRAL ENDING\n");
      }

      else
      {
        printf("Mentre mangi la cena tua madre si avvicina e ti chiede se domani vuoi che ti riaccompagni lei a casa.\nOvviamente accetti entusiasta.\nGOOD ENDING\n");
      }
      
      printf("FINE. GRAZIE PER AVER GIOCATO");
    } 
    else
    {
      printf("Decidi quindi di incamminarti verso casa tua e arrivi alle pendici di una collina e noti due strade, la prima è più corta ma è in salita, la seconda è più lunga ma anche più pianeggiante\nQuale strada prendi?\n1)Prima strada\n2)Seconda strada\n");
      scanf("%d", &choice);
      
      if (choice<=1)
      {
        printf("Inizi a fare la salita e arrancando riesci ad arrivare sano e salvo sulla via di casa tua.\nNoti però vicino al tuo cancello uno strano individuo\n");
        v=v+1;
      }

      else
      {
        printf("Inizi a camminare lungo il sentiero che sembra non avere fine.\nDopo quella che sembrava un'eternità riesci ad arrivare sulla via di casa tua.\nNoti però uno strano individuo vicino al tuo cancello");
      }

      printf("Cosa fai?\n1) Tiri fuori la spada di prima e ti avvicini minacciosamente a lui\n2) Ti avvicini per parlare gentilmente con lui\n3) Rimani fermo dove sei");
      scanf("%d", &choice);
      if(choice<=1)
      {
        printf("L'uomo ti blocca immediatamente\nUomo: 'Tu sei %s!\n", nomeutente);
        v=v-1;
      }
      else if(choice==2)
      {
        printf("L'uomo si accorge di te e ti parla\nUomo:'Tu sei %s!\n", nomeutente);
        v=v+1;
      } 
      else
      {
        printf("L'uomo si avvicina a te\nUomo: 'Tu sei %s!\n", nomeutente);
      }
      printf("Annuisci e, notando una sua distrazione cogli l'occasione per scappare dentro casa evitanto ulteriori conversazioni inquietanti con altri individui\nIncontri tuo fratello che ti chiede come mai sei tornato così tardi\nCosa rispondi?1) Una bugia\n2) La verità\n3) Lo ignori");
      if(choice<=1)
      {
        printf("Dici a tuo fratello come hanno cercato di derubarti per strada cercando di essere convincente.\n Lui non risponde e si limita ad andarsene\n");
        v=v-1;
      }
      else if(choice==2)
      {
        printf("Racconti a tuo fratello la verità e dopo una piccola risatina torna in camera sua\n");
        v=v+1;
      }
      else
      {
        printf("Te ne vai in camera mentre tuo fratello ti guarda offeso da lontano\n");
      }

      printf("E' ora di andare a dormire, metti il pigiama e ti prepari ad andare a letto\n");
      if(v<0)
      {
        printf("Nel tuo letto trovi tantissimi adesivi di autobus messi da tuo fratello.\nDopo l'esperienza di oggi ti spaventi talmente tanto che svieni.\nBAD ENDING");
      }
      else if(v=0)
      {
        printf("Vai a dormire con molta tranquillità.\nNEUTRAL ENDING");
      }
      else
      {
        printf("Dopo aver bevuto una calda tazza di latte ti metti semplicemente nel letto dimenticando tutte le brutte esperienze di quella giornata.\nGOOD ENDING");
      }

      printf("FINE. GRAZIE PER AVER GIOCATO");

    }
  }