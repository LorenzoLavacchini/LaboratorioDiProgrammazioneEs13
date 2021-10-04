# LaboratorioDiProgrammazioneEs13
Il progetto è un gestore di note. Ci sono diversi tipi di collezioni di note (ogni tipo corrisponde ad una classe Collection), 
ed una singola nota può essere aggiunta anche in più tipi di collezioni.
Come richiesto dal testo dell'esercizio è presente l'implementazione del pattern Observer (in versione pull), per mostrare ad ogni singola aggiunta 
o rimozione di note nelle collezioni il numero di note contenute nella particolare collezione. 
Le varie classi "concreteObserver" sono quelle che contengono il suffisso -View.
E' presente una classe base Collection da cui ereditano poi i vari tipi di collezioni di note.
Infine è presente il controllo dell'attrobuto blocked per modificare o eliminare una nota da una collezione: se impostato a true non è consentita 
nessuna delle due operazioni.
Tutto il codice di Unit Testing è versionato e presente nella cartella Test.
