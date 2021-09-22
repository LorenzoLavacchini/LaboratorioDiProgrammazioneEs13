#include <iostream>
#include "Note.h"
#include "NotesCollection.h"
#include "ImportantNotesCollection.h"
#include "SpecificNotesCollection.h"
#include "NotesCollectionView.h"
#include "ImportantNotesCollectionView.h"
#include "SpecificNotesCollectionView.h"


int main() {

    NotesCollection notesCollection("Università");
    ImportantNotesCollection importantNotesCollection;
    SpecificNotesCollection specificNotesCollection;

    //Pattern è in versione pull
    NotesCollectionView notesCollectionView(&notesCollection);
    ImportantNotesCollectionView importantNotesCollectionView(&importantNotesCollection);
    SpecificNotesCollectionView specificNotesCollectionView(&specificNotesCollection);


    Note primaNota("prima nota","appunti di informatica",true);
    Note secondaNota("seconda nota","appunti di matematica",false);

    //Aggiunta di note ad una delle collezioni
    notesCollection.addNote(&primaNota);
    notesCollection.addNote(&secondaNota);

    //Modifica del titolo sulla base dell'attrobuto blocked
    primaNota.setTitle("nuovo titolo");

    //Test della cancellazione di una nota dalla collezione sulla base dell'attributo blocked
    notesCollection.printAllNotes();
    notesCollection.removeNote(&primaNota);
    notesCollection.removeNote(&secondaNota);
    notesCollection.printAllNotes();

    importantNotesCollection.addNote(&primaNota);
    importantNotesCollection.addNote(&secondaNota);


    return 0;
}
