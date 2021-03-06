#include <ultra64.h>

char *lang[] = {
	/*  0*/ "%sha il\nConnettore Dati\n",
	/*  1*/ "%sha il\nCartella\n",
	/*  2*/ "%sha la Cartella di %s\n",
	/*  3*/ "%sha la nostra\nCartella\n",
	/*  4*/ "Presa la Cartella di %s\n",
	/*  5*/ "Hai preso la\nCartella di %s\n",
	/*  6*/ "%s ha preso la nostra\nCartella\n",
	/*  7*/ "%s ha preso la\nCartella di %s\n",
	/*  8*/ "Un punto per la resistenza!\n",
	/*  9*/ "Dovresti aver cura\n",
	/* 10*/ "dei tuoi amici!\n",
	/* 11*/ "Ben fatto!\n",
	/* 12*/ "Libero!\n",
	/* 13*/ "Due punti ...\n",
	/* 14*/ "Sei la vittima!\n",
	/* 15*/ "Proteggi %s!\n",
	/* 16*/ "Prendi %s!\n",
	/* 17*/ "Scaricamento avvenuto.\n",
	/* 18*/ "Connessione fallita.\n",
	/* 19*/ "Avvio scaricamento.\n",
	/* 20*/ "Devi usare il Connettore Dati.\n",
	/* 21*/ "Re \ndel colle!\n",
	/* 22*/ "Abbiamo\nil colle!\n",
	/* 23*/ "%sha preso\nil colle!\n",
	/* 24*/ "%ds/punto\n",
	/* 25*/ "Un punto!\n",
	/* 26*/ "Niente scudo\n",
	/* 27*/ "Automatica\n",
	/* 28*/ "Lanciamissili\n",
	/* 29*/ "Replicanti\n",
	/* 30*/ "Re del Colle\n",
	/* 31*/ "TeleVista complessa\n",
	/* 32*/ "Prendi la cartella\n",
	/* 33*/ "Pistola un colpo micidiale\n",
	/* 34*/ "Prendi la cassa\n",
	/* 35*/ "Mimesi\n",
	/* 36*/ "Esplosivi tempio\n",
	/* 37*/ "Killer\n",
	/* 38*/ "Sedativo\n",
	/* 39*/ "Al rallentatore\n",
	/* 40*/ "Premi START\n",
	/* 41*/ "In pausa\n",
	/* 42*/ "Personale\n",
	/* 43*/ "A caso\n",
	/* 44*/ "Cinque a caso\n",
	/* 45*/ "Lotta ravvicinata\n",
	/* 46*/ "Mina di Prossimit�\n",
	/* 47*/ "Lanciamissili\n",
	/* 48*/ "Lanciagranate\n",
	/* 49*/ "Esplosivo\n",
	/* 50*/ "Magnum d'oro\n",
	/* 51*/ "Pesante\n",
	/* 52*/ "Sedativo\n",
	/* 53*/ "TeleVista\n",
	/* 54*/ "Power\n",
	/* 55*/ "Automatico\n",
	/* 56*/ "Pistole\n",
	/* 57*/ "Prova\n",
	/* 58*/ "Prova 4mb\n",
	/* 59*/ "Niente\n",
	/* 60*/ "Scudo\n",
	/* 61*/ "Disattivato\n",
	/* 62*/ "Obiettivi raggiunti\n",
	/* 63*/ "Sconosciuto\n",
	/* 64*/ "Mancante\n",
	/* 65*/ "Controller Pak difettoso\n",
	/* 66*/ "� danneggiato o \n",
	/* 67*/ "inserito male.\n",
	/* 68*/ "Sistemalo\n",
	/* 69*/ "Riprova\n",
	/* 70*/ "Continua senza\nController Pak\n",
	/* 71*/ "Controller Pak pieno\n",
	/* 72*/ "Memoria esaurita,\nimpossibile salvare.\n",
	/* 73*/ "Accedi al menu\nController Pak per\nliberare spazio (premi START\n all'avvio del gioco.\n",
	/* 74*/ "OK\n",
	/* 75*/ "----------\n",
	/* 76*/ "Pugni uragano\n",
	/* 77*/ "Dispositivo mimetico\n",
	/* 78*/ "Invulnerabile\n",
	/* 79*/ "Tutte armi per miss. indiv.\n",
	/* 80*/ "Munizioni illimitate\n",
	/* 81*/ "Munizioni illimitate, senza ricarica\n",
	/* 82*/ "Un giocatore al rallentatore \n",
	/* 83*/ "Modalit� DK\n",
	/* 84*/ "Magnum di Trent\n",
	/* 85*/ "TeleVista\n",
	/* 86*/ "Jo Piccola\n",
	/* 87*/ "Personaggi piccoli\n",
	/* 88*/ "Scudi nemici\n",
	/* 89*/ "Scudo di Jo\n",
	/* 90*/ "SuperScudo\n",
	/* 91*/ "Vista classica\n",
	/* 92*/ "Solo capi squadra\n",
	/* 93*/ "Gioca come Elvis\n",
	/* 94*/ "Missili nemici\n",
	/* 95*/ "Munizioni illimitate - Pistola Laptop Sentinella\n",
	/* 96*/ "Regole del Marchese di Queensbury\n",
	/* 97*/ "BuioPerfect\n",
	/* 98*/ "Pugile\n",
	/* 99*/ "Colpo\n",
	/*100*/ "Toccata e fuga\n",
	/*101*/ "Alieno\n",
	/*102*/ "Puntatore R/Disposizione armi nascoste\n",
	/*103*/ "Lanciamissili\n",
	/*104*/ "Fucile cecchino\n",
	/*105*/ "Scanner a raggi X\n",
	/*106*/ "SuperDragon\n",
	/*107*/ "Pistola Laptop\n",
	/*108*/ "Phoenix\n",
	/*109*/ "PsicoArma\n",
	/*110*/ "PP9i\n",
	/*111*/ "CC13\n",
	/*112*/ "KL01313\n",
	/*113*/ "KF7 Special\n",
	/*114*/ "ZZT (9mm)\n",
	/*115*/ "DMC\n",
	/*116*/ "AR53\n",
	/*117*/ "RC-P45\n",
	/*118*/ "Velvet Dark\n",
	/*119*/ "Divertimento\n",
	/*120*/ "Gioco\n",
	/*121*/ "Armi\n",
	/*122*/ "Amici\n",
	/*123*/ "Armi per Jo da sola\n",
	/*124*/ "Armi classiche per Jo da sola\n",
	/*125*/ "Ribellione dD",
	/*126*/ "Salvataggio dD",
	/*127*/ "Infiltrazione A51",
	/*128*/ "Salvataggio A51",
	/*129*/ "Fuga A51",
	/*130*/ "Difficolt�:\n",
	/*131*/ "Trucco Missioni Individuali\n",
	/*132*/ "Trucco Simulatore Lotta\n",
	/*133*/ "Trucco Collaborazione\n",
	/*134*/ "Trucco Tutti-contro-Tutti\n",
	/*135*/ "Disonore\n",
	/*136*/ "Truccata\n",
	/*137*/ "Trucco disponibile",
	/*138*/ "Completa",
	/*139*/ "per trucco:",
	/*140*/ "con",
	/*141*/ "in meno di",
	/*142*/ " o inserisci Perfect Dark Game Boy (r) nel Transfer Pak (tm), connetti il Transfer Pak ad un Controller, esci e accedi al menu",
	/*143*/ "Seleziona trucco per informazioni\n",
	/*144*/ "Amico disponibile",
	/*145*/ "Vinci medaglie d'oro al poligono per attivare le pistole classiche.\n",
	/*146*/ "Vista su schermo\n",
	/*147*/ "Obiettivo\n",
	/*148*/ "Area Zoom\n",
	/*149*/ "Munizioni\n",
	/*150*/ "Funzioni arma\n",
	/*151*/ "Macchia colorata\n",
	/*152*/ "Didascalie\n",
	/*153*/ "Tempo Missione\n",
	/*154*/ "Modalit�\n",
	/*155*/ "Dividi\n",
	/*156*/ "Vuoi interrompere\nla missione?\n",
	/*157*/ "Pelle Joanna\n",
	/*158*/ "Negoziatore Joanna\n",
	/*159*/ "Gilet Elvis\n",
	/*160*/ "Errore\n",
	/*161*/ "Impossibile eliminare\nfile in uso.\n",
	/*162*/ "Annulla\n",
	/*163*/ "Limite tempo:\n",
	/*164*/ "Limite punti:\n",
	/*165*/ "Limite punti squadra:\n",
	/*166*/ "Sfida compiuta!\n",
	/*167*/ "Sfida fallita!\n",
	/*168*/ "Sfida truccata!\n",
	/*169*/ "Didascalie film\n",
	/*170*/ "Didascalie nel gioco\n",
	/*171*/ "Schermo alternativo titolo\n",
	/*172*/ "Inizia sfida\n",
	/*173*/ "Indagine dataDyne",
	/*174*/ "Errore\n",
	/*175*/ "Il Controller Pak\n� stato tolto.\n",
	/*176*/ "Sistemalo\n",
	/*177*/ "Sicuro di voler\nsistemare il\nController Pak?\n",
	/*178*/ "Potresti perdere i dati!\n",
	/*179*/ "Annulla\n",
	/*180*/ "Sistema\n",
	/*181*/ "Ci sei riuscito!\n",
	/*182*/ "Il Controller Pak\n� stato sistemato.\n",
	/*183*/ "Non ci sei riuscito.\n",
	/*184*/ "Impossibile sistemare\nil Controller Pak:\nimpossibile caricare\no salvare su questo\nController Pak.\n",
	/*185*/ "Svantaggio giocatore\n",
	/*186*/ "PULSANTI L/R: ",
	/*187*/ "PULSANTE C SU: ",
	/*188*/ "PULSANTI C DX/SX: ",
	/*189*/ "PULSANTE C GI�: ",
	/*190*/ "PULSANTE A: ",
	/*191*/ "PULSANTE B: ",
	/*192*/ "CONTROL STICK: ",
	/*193*/ "PULSANTE Z: ",
	/*194*/ "PULSANTIERA +: ",
	/*195*/ "MIRA",
	/*196*/ "DIS/ATTIVA MIRA",
	/*197*/ "GUARDA SU",
	/*198*/ "GUARDA GI�",
	/*199*/ "GUARDA GI�",
	/*200*/ "GUARDA SU",
	/*201*/ "AVANTI",
	/*202*/ "INDIETRO",
	/*203*/ "SPOSTATI",
	/*204*/ "ARMA",
	/*205*/ "AZIONE/RICARICA",
	/*206*/ "FUOCO",
	/*207*/ "VAI/GIRA",
	/*208*/ "GUARDA",
	/*209*/ "VAI/SPOSTATI",
	/*210*/ "VAI/SPOSTATI",
	/*211*/ "COME PULSANTI C",
	/*212*/ "Controller 1:",
	/*213*/ "Controller 2:",
	/*214*/ "Modalit� comandi %s %s\n",
	/*215*/ "(a una mano)",
	/*216*/ "(a due mani)",
	/*217*/ "Tieni premuto ARMA per menu rapido.\nTieni premuto AZIONE per dis/attivare funzioni.\nAZIONE+FUOCO per cambiare funzioni.\nCon MIRA puoi mirare accuratamente.\nMIRA + C GI� per accucciarti.\nMIRA + C SU per alzarti.\n",
	/*218*/ "Disattiva i trucchi\n",
	/*219*/ "Filtro lingua\n",
	/*220*/ "NOME UTENTE:\n",
	/*221*/ "PASSWORD:\n",
	/*222*/ "Perfect Dark\n",
	/*223*/ "Scegli impostaz.:\n",
	/*224*/ "Velocit� reazione nemico:\n",
	/*225*/ "Salute nemico:\n",
	/*226*/ "Danno nemico:\n",
	/*227*/ "Precisione nemico:\n",
	/*228*/ "OK\n",
	/*229*/ "Annulla\n",
	/*230*/ "Controller Pak assente\n",
	/*231*/ "Nome:\n",
	/*232*/ "Dove:\n",
	/*233*/ "Copia nome file\n",
	/*234*/ "contiene gi� un\n",
	/*235*/ "file di nome\n",
	/*236*/ "Rinomina file\n",
	/*237*/ "Cambia posto\n",
	/*238*/ "Annulla\n",
	/*239*/ "Cambia nome file\n",
	/*240*/ "Digita nuovo nome:\n",
	/*241*/ "Il file che stai copiando\nnon pu� essere cancellato.\n",
	/*242*/ "RepShock:%d\n",
	/*243*/ "Tempo-obiettivo:\n",
	/*244*/ "Nuovo trucco disponibile!:\n",
	/*245*/ "Continua\n",
	/*246*/ "Replay ultimo livello\n",
	/*247*/ "Salva giocatore\n",
	/*248*/ "Salva nuovo giocatore\ne statistiche?\n",
	/*249*/ "Salva!\n",
	/*250*/ "Non salvare!\n",
	/*251*/ "Conferma nome giocatore:\n",
	/*252*/ "Il file in memoria\n� stato cancellato\na causa di un errore.\n",
	/*253*/ "Continua\n",
	/*254*/ "Errore\n",
	/*255*/ "Impossibile leggere la cassetta\ndi gioco Game Boy. Controlla le\nconnessioni e assicurati che si\ntratti della cassetta giusta.\n",
	/*256*/ "Annulla\n",
	/*257*/ "Errore\n",
	/*258*/ "I dati in memoria\n",
	/*259*/ "sono stati eliminati.\n",
	/*260*/ "corruption or damage.\n",
	/*261*/ "Annulla\n",
	/*262*/ "Scegli la lingua:\n",
	/*263*/ "Inglese\n",
	/*264*/ "Francese\n",
	/*265*/ "Tedesco\n",
	/*266*/ "Italiano\n",
	/*267*/ "Spagnolo\n",
	/*268*/ "Americano\n",
	/*269*/ "Lingua:\n",
	/*270*/ "Lingua\n",
	/*271*/ NULL,
};
